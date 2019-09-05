/*
** my_strdup.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 16 14:39:03 2015 Steven Loo Fat
** Last update Fri Jun 19 17:12:47 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"

char	*my_strdup(char *str)
{
  char	*final;

  if ((final = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    {
      my_putstr("Error: malloc in the my_strdup function failed\n");
      return (NULL);
    }
  my_strcpy(final, str);
  return (final);
}
