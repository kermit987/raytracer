/*
** my_strlen.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:53:46 2015 Steven Loo Fat
** Last update Sat Jun 20 14:40:43 2015 Steven Loo Fat
*/

#include "lib.h"

int	my_strlen(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
