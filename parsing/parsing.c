/*
** parsing.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/parsing
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 16 12:55:07 2015 Steven Loo Fat
** Last update Mon Jun 29 14:33:47 2015 Steven Loo Fat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "linked_list.h"
#include "lib.h"
#include "parsing.h"

int	parsing(t_control *control, int fd, char **final, char *str)
{
  static int	line = 1;

  if (my_strcmp(final[0], "#eye") == 0)
    {
      if (init_parsing_eyes(&control->eye, str, line) == NULL)
	return (-1);
    }
  else if (my_strcmp(final[0], "#object") == 0)
    {
      if ((init_parsing_object(&control->object, str, fd, line)) == -1)	
	return (-1);
    }
  else if ((my_strcmp(final[0], "#light")) == 0)
    {
      if ((init_parsing_light(&control->light, str, line)) == -1)
	return (-1);
    }
  line++;
  return (0);
}

int	init_parsing(t_control *control, int fd)
{
  char 	**final;
  char 	*str;
  int	eye;

  final = NULL;
  eye = 0;
  while ((str = get_next_line(fd)) != NULL)
    {
      if ((final = str_to_wordtab(str, ' ')) == NULL)
  	return (-1);
      if (my_strcmp(final[0], "#eye") == 0)
	eye = 1;
      if ((parsing(control, fd, final, str)) == -1)
  	{
  	  free_char_tab(final);
  	  return (-1);
  	}
    }
  if (eye == 0)
    return (eye_error());
  if (final != NULL)
    free_char_tab(final);
  free(str);
  return (0);
}
