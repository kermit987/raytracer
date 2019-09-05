/*
** how_many_word.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Thu Jun 18 15:14:13 2015 Steven Loo Fat
** Last update Sat Jun 20 14:16:50 2015 Steven Loo Fat
*/

#include "lib.h"

int	how_many_word(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	nb++;
      i++;
    }
  return (nb);
}
