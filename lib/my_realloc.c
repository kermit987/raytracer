/*
** utils.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue May 26 18:59:06 2015 Steven Loo Fat
** Last update Sat Jun 20 14:17:37 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"

char	*my_realloc(char *str, int size)
{
  char	*tmp;

  if ((tmp =  malloc(sizeof(char) * size)) == NULL)
    {
      my_putstr("Error: malloc in the my_realloc function failed\n");
      return (NULL);
    }
  my_strcpy(tmp, str);
  return (tmp);
}
