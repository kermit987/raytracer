/*
** get_impact.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/source
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 26 16:39:55 2015 Steven Loo Fat
** Last update Fri Jun 26 16:40:55 2015 Steven Loo Fat
*/

#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib.h"
#include "linked_list.h"
#include "parsing.h"
#include "rtv1.h"
#include "mlx.h"

void		get_impact(t_coord *coord, t_ray *ray, float distance)
{
  coord->x = ray->tab[1].x * distance + ray->tab[0].x;
  coord->y = ray->tab[1].y * distance + ray->tab[0].y;
  coord->z = ray->tab[1].z * distance + ray->tab[0].z;
}
