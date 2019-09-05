/*
** my_put_in_list_end.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/linked_list
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 16 14:30:06 2015 Steven Loo Fat
** Last update Sun Jun 28 18:51:07 2015 Steven Loo Fat
*/

#include <string.h>
#include <stdlib.h>
#include "linked_list.h"
#include "lib.h"

int		which_object(t_object **object, t_tmp_object *tmp_obj)
{
  int	       	i;
  t_array      	array[4];
  enum e_type	type;

  i = 0;
  (void)type;
  array[0].str = "sphere";
  array[0].type = TYPE_SPHERE;
  array[1].str = "plan";
  array[1].type = TYPE_PLAN;
  array[2].str = "cylindre";
  array[2].type = TYPE_CYLINDRE;
  array[3].str = "cone";
  array[3].type = TYPE_CONE;
  i = 0;
  while (i != 4)
    {
      if ((my_strcmp(tmp_obj->name, array[i].str)) == 0)
	return (my_put_in_list_object(object, tmp_obj, array[i].type));
      i++;
    }
  my_putstr("Error: unknow type\n");
  return (-1);
}

t_object	*my_put_in_list_object_next(t_object *new_elem,
					    t_tmp_object *tmp_obj,
					    enum e_type type)
{
  new_elem->type = type;
  new_elem->origin.x = tmp_obj->origin.x;
  new_elem->origin.y = tmp_obj->origin.y;
  new_elem->origin.z = tmp_obj->origin.z;
  new_elem->rayon = (float)my_getnbr(tmp_obj->rayon);
  new_elem->vector_1.x = tmp_obj->vector_1.x;
  new_elem->vector_1.y = tmp_obj->vector_1.y;
  new_elem->vector_1.z = tmp_obj->vector_1.z;
  new_elem->vector_2.x = tmp_obj->vector_2.x;
  new_elem->vector_2.y = tmp_obj->vector_2.y;
  new_elem->vector_2.z = tmp_obj->vector_2.z;
  new_elem->angle = (float)my_getnbr(tmp_obj->angle);
  new_elem->color[0] = tmp_obj->color[0];
  new_elem->color[1] = tmp_obj->color[1];
  new_elem->color[2] = tmp_obj->color[2];
  return (new_elem);
}

int		my_put_in_list_object(t_object **object,
			      t_tmp_object *tmp_obj, enum e_type type)
{
  t_object	*new_elem;
  t_object	*tmp;

  if ((new_elem = malloc(sizeof(t_object))) == NULL)
    return (int_error("malloc", "my_put_in_list_object"));
  new_elem = my_put_in_list_object_next(new_elem, tmp_obj, type);
  if ((*object) == NULL)
    {
      (*object) = new_elem;
      return (0);
    }
  tmp = (*object);
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = new_elem;
  return (0);
}

int	my_put_in_list_light(t_light **light, char *x,
				      char *y, char *z)
{
  struct s_light	*new_elem;
  struct s_light	*tmp;

  if ((new_elem = malloc(sizeof(t_light))) == NULL)
    return (int_error("malloc", "my_put_in_list_object"));
  new_elem->origin.x = (float)my_getnbr(x);
  new_elem->origin.y = (float)my_getnbr(y);
  new_elem->origin.z = (float)my_getnbr(z);
  if ((*light) == NULL)
    {
      (*light) = new_elem;
      return (0);
    }
  tmp = (*light);
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = new_elem;
  return (0);
}
