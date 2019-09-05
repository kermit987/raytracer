/*
** find_matrice.c for  in /home/loofat_s/rendu/MUL_2014_rtracer
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 16 12:22:43 2015 Steven Loo Fat
** Last update Sun Jun 28 18:19:49 2015 Steven Loo Fat
*/

#include <math.h>
#include <stdlib.h>
#include "lib.h"
#include "linked_list.h"
#include "parsing.h"
#include "rtv1.h"
#include "mlx.h"

float	**create_tab_matrice(int first_dimension, int second_dimension)
{
  float	**tab;
  int	i;

  i = 0;
  if ((tab = malloc(sizeof(int*) * first_dimension)) == NULL)
    {
      my_putstr("Error: malloc in the first dimension failed\n");
      return (NULL);
    }
  while (i != second_dimension)
    {
      if ((tab[i] = malloc(sizeof(int) * second_dimension)) == NULL)
	{
       	  my_putstr("Error: malloc in the second dimension failed\n");
	  return (NULL);
	}
      i++;
    }
  return (tab);
}

float	**fidding_matrice(float **tab, float horizontal, float vertical)
{
  tab[0][0] = cos((horizontal * M_PI) / 180) * cos((vertical * M_PI) / 180);
  tab[0][1] = -sin((vertical * M_PI) / 180);
  tab[0][2] = cos((vertical * M_PI) / 180) * sin((horizontal * M_PI) / 180);
  tab[1][0] = cos((horizontal * M_PI) / 180) * sin((vertical * M_PI) / 180);
  tab[1][1] = cos((horizontal * M_PI) / 180);
  tab[1][2] = -sin((horizontal * M_PI) / 180) * sin((vertical * M_PI) / 180);
  tab[2][0] = -sin((horizontal * M_PI) / 180);
  tab[2][1] = 0;
  tab[2][2] = cos((horizontal * M_PI) / 180);
  return (tab);
}
