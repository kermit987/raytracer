/*
** maths_function.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/source
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 26 16:21:33 2015 Steven Loo Fat
** Last update Sat Jun 27 19:17:26 2015 Steven Loo Fat
*/

#include <math.h>
#include "lib.h"
#include "linked_list.h"
#include "parsing.h"
#include "rtv1.h"
#include "mlx.h"

void	produit_vectoriel(t_coord *result, t_coord *vector1, t_coord *vector2)
{
  result->x = (vector1->y * vector2->z) - (vector2->y * vector1->z);
  result->y = (vector1->z * vector2->x) - (vector2->z * vector1->x);
  result->z = (vector1->x * vector2->y) - (vector2->x * vector1->y);
}

float	produit_scallaire(t_coord *vector1, t_coord *vector2)
{
  return (vector1->x * vector2->x +
	  vector1->y * vector2->y +
	  vector1->z * vector2->z);
}

float	norme(t_coord *vector)
{
  return (sqrt(vector->x * vector->x +
	       vector->y * vector->y +
	       vector->z * vector->z));
}
