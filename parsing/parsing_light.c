/*
** parsing_light.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/parsing
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Wed Jun 24 23:28:31 2015 Steven Loo Fat
** Last update Sun Jun 28 18:32:00 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "linked_list.h"
#include "lib.h"
#include "parsing.h"

int	parsing_light(t_light **light, char *str, int line,
		      char **final)
{
  int	i;

  i = 1;
  if ((how_many_word(str)) != 3)
    return (few_argv_error("light"));
  while (i != 4)
    {
      if ((my_str_isnum(final[i], line)) == -1)
	return (-1);
      i++;
    }
  if ((my_put_in_list_light(light, final[1], final[2], final[3])) == -1)
    {
      free_char_tab(final);
      return (-1);
    }
  return (0);
}

int	init_parsing_light(t_light **light, char *str, int line)
{
  char	**final;

  if ((final = str_to_wordtab(str, ' ')) == NULL)
    return (-1);  
  if ((parsing_light(light, str, line, final)) == -1)
    {
      free_char_tab(final);
      free(str);
      return (-1);
    }
  return (0);
}
