/*
** error.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue May 26 23:44:25 2015 Steven Loo Fat
** Last update Tue Jun 23 16:45:48 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"

char	*str_error(char *function, char *where)
{
  my_putstr("Error: ");
  my_putstr(function);
  my_putstr(" in function ");
  my_putstr(where);
  my_putstr(" failed\n");
  return (NULL);
}

int	int_error(char *function, char *where)
{
  my_putstr("Error: ");
  my_putstr(function);
  my_putstr(" Failed in function ");
  my_putstr(where);
  my_putstr("\n");
  return (-1);
}
