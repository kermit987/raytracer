/*
** my_strncmp.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 23 16:07:22 2015 Steven Loo Fat
** Last update Tue Jun 23 16:22:39 2015 Steven Loo Fat
*/

#include <stdio.h>

int	my_strncmp(char *s1, char *s2, int nb)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (i != nb && s1 != '\0' && s2 != '\0')
    {
      if (s1[i] != s2[i])
	return (-1);
      i++;
    }
  return (0);
}
