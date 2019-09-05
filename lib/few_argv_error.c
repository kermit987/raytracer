/*
** few_argv_error.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 23 16:46:28 2015 Steven Loo Fat
** Last update Tue Jun 23 16:54:06 2015 Steven Loo Fat
*/

#include "lib.h"

int	few_argv_error(char *function)
{
  my_putstr("Missing value for ");
  my_putstr(function);
  my_putstr("\n");
  return (-1);
}
