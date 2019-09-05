/*
** parsing_eye.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/parsing
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Wed Jun 24 23:48:51 2015 Steven Loo Fat
** Last update Mon Jun 29 11:18:52 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "linked_list.h"
#include "lib.h"
#include "parsing.h"

t_eye	*parsing_eyes(t_eye *eye, char *str, int line, char **final)
{
  int	i;

  i = 1;
  if ((how_many_word(str) != 3) && (how_many_word(str) != 5))
    {
      my_putstr("Error: missing numeric value\n");
      return (NULL);
    }
  while (i != how_many_word(str) + 1)
    {
      if (my_str_isnum(final[i], line) == -1)
	return (NULL);
      i++;
    }
  eye->origin.x = (float)my_getnbr(final[1]);
  eye->origin.y = (float)my_getnbr(final[2]);
  eye->origin.z = (float)my_getnbr(final[3]);
  eye->rotation.x = 0;
  eye->rotation.y = 0;
  if(how_many_word(str) == 5)
    {
      eye->rotation.x = (float)my_getnbr(final[4]);
      eye->rotation.y = (float)my_getnbr(final[5]);
    }
  return (eye);
}

t_eye	*init_parsing_eyes(t_eye *eye, char *str, int line)
{
  char	**final;

  if ((final = str_to_wordtab(str, ' ')) == NULL)
    return (NULL);
  if ((eye = parsing_eyes(eye, str, line, final)) == NULL)
    {
      free_char_tab(final);
      free(str);
      return (NULL);
    }
  free_char_tab(final);
  free(str);
  return (eye);
}
