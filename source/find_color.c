/*
** find_color.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/source
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 26 16:42:02 2015 Steven Loo Fat
** Last update Mon Jun 29 15:05:46 2015 Steven Loo Fat
*/

#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib.h"
#include "linked_list.h"
#include "parsing.h"
#include "rtv1.h"
#include "mlx.h"

int	find_color(t_object *object, float intensity)
{
  unsigned int	tab[3];

  (void)tab;
  if (intensity < 1)
    {
      tab[0] = object->color[0] * intensity;
      tab[1] = object->color[1] * intensity;
      tab[2] = object->color[2] * intensity;
    }
  tab[0] = object->color[0] + (255 - object->color[0]) * (intensity - 1);
  tab[1] = object->color[1] + (255 - object->color[1]) * (intensity - 1);
  tab[2] = object->color[2] + (255 - object->color[2]) * (intensity - 1);
  return (tab[0] << 16 | (tab[1] << 8) | tab[2]);
}
