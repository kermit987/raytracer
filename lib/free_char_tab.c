/*
** free_tab.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Thu Jun 18 14:47:51 2015 Steven Loo Fat
** Last update Tue Jun 23 12:25:15 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"

void	free_char_tab(char **str)
{
  int	i;

  i = 0;
  while (str[i] != NULL)
    {
      free(str[i]);
      i++;
    }
  free(str);
}
