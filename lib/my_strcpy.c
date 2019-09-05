/*
** my_strcpy.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:34:26 2015 Steven Loo Fat
** Last update Sat Jun 20 14:17:56 2015 Steven Loo Fat
*/

#include "lib.h"

void	my_strcpy(char *destination, char *source)
{
  int	i;

  i = 0;
  while (source[i] != '\0')
    {
      destination[i] = source[i];
      i++;
    }
  destination[i] = '\0';
}
