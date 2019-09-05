/*
** inter_function.c for  in /home/loofat_s/rendu/MUL_2014_rtracer
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Sun Jun  7 01:52:36 2015 Steven Loo Fat
** Last update Mon Jun 29 13:31:55 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include <math.h>
#include "lib.h"
#include "linked_list.h"
#include "parsing.h"
#include "rtv1.h"
#include "mlx.h"

void	inter_sphere(t_ray *ray, t_object *object)
{
  float	delta;
  float	a;
  float	b;
  float	c;
  float	k1;
  float	k2;

  object->distance = 0;
  a = CARRE(norme(&ray->tab[1]));
  b = 2 * (ray->tab[1].x * (ray->tab[0].x - object->origin.x) +
	   ray->tab[1].y * (ray->tab[0].y - object->origin.y) +
	   ray->tab[1].z * (ray->tab[0].z - object->origin.z));
  c = CARRE((ray->tab[0].x - object->origin.x)) +
    CARRE((ray->tab[0].y - object->origin.y)) + 
    CARRE((ray->tab[0].z - object->origin.z)) -
    CARRE(object->rayon);
  delta = DELTA(a, b, c);
  if (delta >= 0)
    {
      k1 = (-b - sqrt(delta)) / (2 * a);
      k2 = (-b + sqrt(delta)) / (2 * a);
      object->distance = MIN(k1, k2);
    }
}

void		inter_plan(t_ray *ray, t_object *object)
{
  t_coord	vector1;
  t_coord	vector2;

  vector1.x = ray->tab[0].x - object->origin.x;
  vector1.y = ray->tab[0].y - object->origin.y;
  vector1.z = ray->tab[0].z - object->origin.z;
  produit_vectoriel(&vector2, &object->vector_1, &object->vector_2);
  if (produit_scallaire(&ray->tab[1], &vector2) == 0)
    object->distance = 0;
  object->distance = -(produit_scallaire(&vector1, &vector2)
		       / produit_scallaire(&ray->tab[1], &vector2));
}

void    init_cylindre(t_coord *vector1, t_ray *ray, t_object *object)
{
  vector1->x = ray->tab[0].x - object->origin.x;
  vector1->y = ray->tab[0].y - object->origin.y;
  vector1->z = ray->tab[0].z - object->origin.z;
}

void		inter_cylindre(t_ray *ray, t_object *object)
{
  t_coord	vector1;
  t_coord	vector2;
  t_coord	vector3;
  float		delta;
  float		abc[3];
  float		k1;
  float		k2;

  object->distance = 0;
  init_cylindre(&vector1, ray, object);
  produit_vectoriel(&vector2, &ray->tab[1], &object->vector_1);
  produit_vectoriel(&vector3, &vector1, &object->vector_1);
  abc[0] = CARRE(norme(&vector2));
  abc[1] = 2 * produit_scallaire(&vector2, &vector3);
  abc[2] = CARRE(norme(&vector3))
    - CARRE(object->rayon) * CARRE(norme(&object->vector_1));
  delta = DELTA(abc[0], abc[1], abc[2]);
  if (delta >= 0)
    {
      k1 = (-abc[1] - sqrt(delta)) / (2 * abc[0]);
      k2 = (-abc[1] + sqrt(delta)) / (2 * abc[0]);
      object->distance = MIN(k1, k2);
    }
}

void		which_intersection_function(t_ray *ray, t_object *object)
{
  int		i;
  t_type_object	tab[5];

  i = 0;
  tab[0].type = TYPE_SPHERE;
  tab[0].function = &inter_sphere;
  tab[1].type = TYPE_PLAN;
  tab[1].function = &inter_plan;
  tab[2].type = TYPE_CYLINDRE;
  tab[2].function = &inter_cylindre;
  tab[3].type = TYPE_CONE;
  tab[3].function = &inter_cone;
  tab[4].function = NULL;
  while (tab[i].function != NULL && object->type != tab[i].type)
    i++;
  if (tab[i].function != NULL)
    tab[i].function(ray, object);
}
