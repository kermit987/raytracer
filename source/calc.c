/*
** calc.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/source
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 26 16:31:51 2015 Steven Loo Fat
** Last update Mon Jun 29 13:58:22 2015 Steven Loo Fat
*/

#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib.h"
#include "linked_list.h"
#include "parsing.h"
#include "rtv1.h"
#include "mlx.h"

t_object		*first_object(t_object *object, t_ray *ray,
				      float minimal, float maximal)
{
  t_object		*min;
  struct s_object       *tmp;

  tmp = object;
  min = tmp;
  while (tmp != NULL)
    {
      which_intersection_function(ray, tmp);
      if ((tmp->distance < min->distance &&
	   (tmp->distance >= minimal &&
	    tmp->distance < maximal)) ||
	  ((min->distance < minimal || min->distance > maximal) &&
	   (tmp->distance >= minimal && tmp->distance < maximal)))
	min = tmp;
      tmp = tmp->next;
    }
  return (min);
}

int		find_intersection(t_control *control, t_ray *ray)
{
  t_object	*near_object;
  t_coord	impact_object;

  implement_light(control);
  if ((near_object = first_object(control->object, ray, 1, INFINI)) == NULL
      || near_object->distance <= 1)
    return (BACKGROUND);
  get_impact(&impact_object, ray, near_object->distance);
  return (find_color(near_object, ray->intensity));
}

void		create_ray(int x, int y, t_ray *ray, t_control *control)
{
  static float	**tab = NULL;
  t_coord	tmp;

  if (tab == NULL)
    {
      tab = create_tab_matrice(3, 3);
      tab = fidding_matrice(tab, control->eye.rotation.x, control->eye.rotation.y);
    }
  ray->intensity = 1;
  ray->tab[0].x = control->eye.origin.x;
  ray->tab[0].y = control->eye.origin.y;
  ray->tab[0].z = control->eye.origin.z;
  tmp.x = 2400;
  tmp.y = (WIN_X / 2) - x;
  tmp.z = (WIN_Y / 2) - y;
  ray->tab[1].x = (tmp.x * tab[0][0]) + (tmp.y * tab[1][0])
    + (tmp.z * tab[2][0]);
  ray->tab[1].y = (tmp.x * tab[0][1]) + (tmp.y * tab[1][1])
    + (tmp.z * tab[2][1]);
  ray->tab[1].z = (tmp.x * tab[0][2]) + (tmp.y * tab[1][2])
    + (tmp.z * tab[2][2]);
}

int		calc(int x, int y, t_control *control)
{
  t_ray		ray;

  if (control == NULL)
    return (BACKGROUND);
  create_ray(x, y, &ray, control);
  return (find_intersection(control, &ray));
}
