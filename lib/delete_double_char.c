/*
** delete_double_char.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:43:11 2015 Steven Loo Fat
** Last update Sun Jun 28 18:35:20 2015 Steven Loo Fat
*/

#include "lib.h"

void	delete_double_char(char *str, char to_remove)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_remove && str[i + 1] == to_remove)
	{
	  while (str[i] != '\0')
	    {
	      str[i] = str[i + 1];
	      i++;
	    }
	  i = 0;
	}
      else
	i++;
    }
}
