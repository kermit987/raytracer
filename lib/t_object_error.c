/*
** t_object_error.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Sat Jun 20 17:15:55 2015 Steven Loo Fat
** Last update Sat Jun 20 17:19:00 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"
#include "linked_list.h"

t_object	*t_object_error(char *function, char *where)
{
  my_putstr("Error: ");
  my_putstr(function);
  my_putstr(" in function ");
  my_putstr(where);
  my_putstr(" failed\n");
  return (NULL);
}
