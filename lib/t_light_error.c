/*
** t_light_error.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 23 17:01:41 2015 Steven Loo Fat
** Last update Tue Jun 23 17:03:11 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"
#include "linked_list.h"

t_light		*t_light_error(char *function, char *where)
{
  my_putstr("Error: ");
  my_putstr(function);
  my_putstr(" in function ");
  my_putstr(where);
  my_putstr(" failed\n");
  return (NULL);
}
