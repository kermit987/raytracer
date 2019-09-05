/*
** cone_function.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/source
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
**
** Started on  Fri Jun 26 16:11:01 2015 Steven Loo Fat
** Last update Mon Jun 29 14:51:09 2015 Steven Loo Fat
*/

#include <math.h>
#include "parsing.h"
#include "linked_list.h"
#include "rtv1.h"
#include "lib.h"

void	init_cone(t_coord *vector1, t_ray *ray, t_object *object, float *abc)
{
  vector1->x = ray->tab[0].x - object->origin.x;
  vector1->y = ray->tab[0].y - object->origin.y;
  vector1->z = ray->tab[0].z - object->origin.z;
  abc[0] = CARRE(produit_scallaire(&object->vector_1, &ray->tab[1]))
    - (CARRE(norme(&object->vector_1)) *
       CARRE(norme(&ray->tab[1])) *
       CARRE(cos(CONVERT(object->angle))));
  abc[1] = (produit_scallaire(&object->vector_1, vector1) *
	    produit_scallaire(&object->vector_1, &ray->tab[1]))
    - (produit_scallaire(vector1, &ray->tab[1]) *
       CARRE(norme(&object->vector_1)) *
       CARRE(cos(CONVERT(object->angle)))) * 2;
  abc[2] = CARRE(produit_scallaire(&object->vector_1,
				   vector1)) - CARRE(norme(vector1))
    * CARRE(norme(&object->vector_1)) * CARRE(cos(CONVERT(object->angle)));
}

void		inter_cone(t_ray *ray, t_object *object)
{
  float		delta;
  float		abc[3];
  float		k1;
  float		k2;
  t_coord	vector1;

  object->distance = 0;
  init_cone(&vector1, ray, object, abc);
  delta = DELTA(abc[0], abc[1], abc[2]);
  if (delta >= 0)
    {
      k1 = (-abc[1] - sqrt(delta)) / (2 * abc[0]);
      k2 = (-abc[1] + sqrt(delta)) / (2 * abc[0]);
      object->distance = MIN(k1, k2);
    }
}
