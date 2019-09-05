/*
** delete_char_after_word.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:42:11 2015 Steven Loo Fat
** Last update Sun Jun 28 18:34:05 2015 Steven Loo Fat
*/

#include "lib.h"

void	delete_char_after_word(char *str, char to_remove)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    i++;
  i--;
  while (str[i] == to_remove)
    { 
      str[i] = '\0';
      i--;
    }
}
