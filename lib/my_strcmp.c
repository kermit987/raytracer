/*
** my_strcmp.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 16 13:18:26 2015 Steven Loo Fat
** Last update Sun Jun 28 18:38:51 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (int_error("my_strcmp", "parsing"));
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] != s2[i])
	return (-1);
      i++;
    }
  return (0);
}
