/*
** my_strndup.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Sat Jun 27 14:45:30 2015 Steven Loo Fat
** Last update Sat Jun 27 15:04:56 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"

char	*my_strndup(char *str, int nb)
{
  int	i;
  char	*destination;

  i = 0;
  if ((destination = malloc(sizeof(char *) * (nb + 1))) == NULL)
    {
      my_putstr("Error: malloc in the my_strndup function failed\n");
      return (NULL);
    }
  while (i != nb && str[i] != '\0')
    {
      destination[i] = str[i];
      i++;
    }
  destination[i] = '\0';
  return (destination);
}
