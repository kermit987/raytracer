/*
** get_next_line.c for  in /home/loofat_s/rendu/MUL_2014_rtracer
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 16 11:31:26 2015 Steven Loo Fat
** Last update Sun Jun 28 18:36:40 2015 Steven Loo Fat
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "lib.h"

char	*get_next_line_next(char *str, char *tmp,
			    int read_value, const int fd)
{
  int	limit;

  limit = 0;
  while (tmp[0] != '\n' && read_value != 0)
    {
      if ((read_value = read(fd, tmp, 1)) == -1)
	return (str_error("read", "get_next_line_next"));
      if (read_value == 0 && str[0] == 0)
	return (NULL);
      else if (read_value == 0)
	return (str);
      if (tmp[0] == '\n')
	my_strcat(str, "\0");
      else
	my_strcat(str, tmp);
      limit++;
      if (limit == 9)
	{
	  str = my_realloc(str, my_strlen(str) + 10);
	  limit = 0;
	}
    }
  return (str);
}

char	*get_next_line(const int fd)
{
  char	*str;
  char	tmp[2];
  int	read_value;

  read_value = 1;
  if ((str = malloc(sizeof(char) * 10)) == NULL)
    return (str_error("malloc", "get_next_line"));
  my_memset(str, 0, 10);
  my_memset(tmp, 0, 2);
  if ((str = get_next_line_next(str, tmp, read_value, fd)) == NULL)
    return (NULL);
  str = epur_str(str);
  return (str);
}
