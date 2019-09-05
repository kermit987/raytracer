/*
** free_int_tab.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 23 12:28:05 2015 Steven Loo Fat
** Last update Tue Jun 23 12:29:29 2015 Steven Loo Fat
*/

#include <stdlib.h>

void	free_int_tab(int **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}
