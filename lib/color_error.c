/*
** color_error.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Sat Jun 27 15:02:11 2015 Steven Loo Fat
** Last update Sat Jun 27 15:06:35 2015 Steven Loo Fat
*/

#include "lib.h"

int	color_error(int line)
{
  my_putstr("Error: invalid value for color at line ");
  my_putnbr(line);
  my_putstr("\n");
  return (-1);
}
