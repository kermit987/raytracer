/*
** my_putstr.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:51:06 2015 Steven Loo Fat
** Last update Sat Jun 20 14:17:30 2015 Steven Loo Fat
*/

#include "lib.h"

void	my_putstr(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
