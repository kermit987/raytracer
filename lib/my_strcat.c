/*
** my_strcat.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:37:00 2015 Steven Loo Fat
** Last update Sat Jun 20 14:39:36 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"

char	*my_strcat(char *destination, char *source)
{
  int	i;
  int	t;

  i = 0;
  t = 0;
  if (destination == NULL || source == NULL)
    return (NULL);
  while (destination[i] != '\0')
    i++;
  while (source[t] != '\0')
    {
      destination[i] = source[t];
      i++;
      t++;
    }
  destination[i] = '\0';
  return (destination);
}
