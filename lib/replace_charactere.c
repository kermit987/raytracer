/*
** replace_charactere.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:38:54 2015 Steven Loo Fat
** Last update Sun Jun 28 18:40:40 2015 Steven Loo Fat
*/

#include "lib.h"

void	replace_charactere(char *str, char old, char new)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == old)
	str[i] = new;
      i++;
    }
}
