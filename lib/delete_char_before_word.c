/*
** delete_char_before_word.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:40:44 2015 Steven Loo Fat
** Last update Sun Jun 28 18:34:19 2015 Steven Loo Fat
*/

#include "lib.h"

void	delete_char_before_word(char *str, char to_remove)
{
  int	i;

  while (str[0] == to_remove)
    {
      i = 0;
      while (str[i] != '\0')
	{
	  str[i] = str[i + 1];
	  i++;
	}
    }
}
