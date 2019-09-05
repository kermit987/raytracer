/*
** parsing_object.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/parsing
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Thu Jun 25 13:02:34 2015 Steven Loo Fat
** Last update Sun Jun 28 18:24:53 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "linked_list.h"
#include "lib.h"
#include "parsing.h"

int		split_color(unsigned char *color, char *final, int line)
{
  int		i;
  int		t;
  char		*tmp;

  i = 0;
  t = 0;
  if (my_strlen(final) != 9)
    return (color_error(line));
  if ((my_str_isnum(final, line)) == -1)
    return (-1);
  while (i != 3)
    {
      tmp = my_strndup(&final[t], 3);
      if (my_getnbr(tmp) > 255 && my_getnbr(tmp) < 0)
	return (color_error(line));
      color[i] = my_getnbr(tmp);
      i++;
      t = t + 3;
    }
  return (0);
}

int		fidding_tmp_struct(t_tmp_object *tmp, char **final, int line)
{
  tmp->name = my_strdup(final[0]);
  tmp->origin.x = (float)my_getnbr(final[1]);
  tmp->origin.y = (float)my_getnbr(final[2]);
  tmp->origin.z = (float)my_getnbr(final[3]);
  tmp->rayon = my_strdup(final[4]);
  tmp->vector_1.x = (float)my_getnbr(final[5]);
  tmp->vector_1.y = (float)my_getnbr(final[6]);
  tmp->vector_1.z = (float)my_getnbr(final[7]);
  tmp->vector_2.x = (float)my_getnbr(final[8]);
  tmp->vector_2.y = (float)my_getnbr(final[9]);
  tmp->vector_2.z = (float)my_getnbr(final[10]);
  tmp->angle = my_strdup(final[11]);
  if (split_color(&tmp->color[0], final[12], line) == -1)
    return (-1);
  return (0);
}

int		parsing_object_next(t_object **object, char **final,
				    int line)
{
  t_tmp_object	tmp;
  int		i;

  i = 1;
  while (i != 13)
    {
      if ((my_str_isnum(final[i], line)) == -1)
	return (-1);
      i++;
    }
  if ((fidding_tmp_struct(&tmp, final, line)) == -1)
    return (-1);
  if ((which_object(object, &tmp)) == -1)
    return (-1);
  return (0);
}

int	parsing_object(t_object **object, int line, char *str)
{
  char	**final;

  if ((how_many_word(str)) != 12)
    return (few_argv_error("object"));
  if ((final = str_to_wordtab(str, ' ')) == NULL)
    return (-1);
  if ((parsing_object_next(object, final, line)) == -1)
    {
      free_char_tab(final);
      return (-1);
    }
  free_char_tab(final);
  return (0);
}

int	init_parsing_object(t_object **object, char *str, int fd, int line)
{
  while ((str = get_next_line(fd)) != NULL)
    {
      if ((my_strcmp(str, "==")) == 0)
	return (1);
      if ((parsing_object(object, line, str)) == -1)
	{
	  free(str);
	  return (-1);
	}
    }
  return (0);
}
