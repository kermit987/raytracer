/*
** my_memset.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:57:32 2015 Steven Loo Fat
** Last update Sat Jun 20 14:17:07 2015 Steven Loo Fat
*/

#include "lib.h"

void	my_memset(char *str, const int value, const int size)
{
  int	i;

  i = 0;
  while (i != size)
    {
      str[i] = value;
      i++;
    }
}
