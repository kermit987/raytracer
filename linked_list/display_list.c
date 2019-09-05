/*
** display_list.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/linked_list
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 23 18:19:29 2015 Steven Loo Fat
** Last update Sun Jun 28 01:55:24 2015 Steven Loo Fat
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "lib.h"

int			display_object(t_object *object)
{
  struct s_object	*tmp;

  tmp = object;
  while (tmp != NULL)
    {
      printf("Je suis dedans\n");
      printf("enum value %d\n", (int)tmp->type);
      printf("x %f\n", tmp->origin.x);
      printf("y %f\n", tmp->origin.y);
      printf("z %f\n", tmp->origin.z);
      /*  */
      printf("rayon %f\n", tmp->rayon);
      /*  */
      printf("vector_1x %f\n", tmp->vector_1.x);
      printf("vector_1y %f\n", tmp->vector_1.y);
      printf("vector_1z %f\n", tmp->vector_1.z);
      /*  */
      printf("vector_2x %f\n", tmp->vector_2.x);
      printf("vector_2y %f\n", tmp->vector_2.y);
      printf("vector_2z %f\n", tmp->vector_2.z);
      /*  */
      printf("angle %f\n", tmp->angle);
      /*  */
      printf("couleur %d\n", tmp->color[0]);
      printf("couleur %d\n", tmp->color[1]);
      printf("couleur %d\n", tmp->color[2]);

      tmp = tmp->next;
      printf("===\n");
    }
  return (0);
}
