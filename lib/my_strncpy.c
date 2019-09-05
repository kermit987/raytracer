/*
** strncpy.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Wed Jun 17 17:00:52 2015 Steven Loo Fat
** Last update Sat Jun 20 14:18:11 2015 Steven Loo Fat
*/

#include "lib.h"

void	my_strncpy(char *source, char *destination, int nb)
{
  int	i;

  i = 0;
  while (i != nb)
    {
      destination[i] = source[i];
      i++;
    }
  destination[i] = '\0';
}
