/*
** my_putchar.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:49:37 2015 Steven Loo Fat
** Last update Sat Jun 20 14:33:40 2015 Steven Loo Fat
*/

#include <unistd.h>
#include "lib.h"

void	my_putchar(const char c)
{
  write(1, &c, 1);
}
