/*
** my_str_isnum.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 13:07:53 2015 Steven Loo Fat
** Last update Sun Jun 28 18:39:13 2015 Steven Loo Fat
*/

#include "lib.h"

int	my_str_isnum(char *str, int line)
{
  int	i;

  i = 0;
  if (str[0] == '-')
    i = 1;
  while (str[i] != '\0')
    {
      if (str[i] < 48 || str[i] > 57)
	{
	  my_putstr("Error: missing numeric value at line ");
	  my_putnbr(line);
	  my_putchar('\n');
	  return (-1);
	}
      i++;
    }
  return (0);
}
