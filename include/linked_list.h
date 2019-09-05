/*
** linked_list.h for  in /home/loofat_s/rendu/MUL_2014_rtracer/linked_list
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Sat Jun 20 16:25:12 2015 Steven Loo Fat
** Last update Mon Jun 29 10:58:15 2015 Steven Loo Fat
*/

#ifndef LINKED_LIST
# define LINKED_LIST

enum			e_type
  {
    TYPE_SPHERE,
    TYPE_PLAN,
    TYPE_CYLINDRE,
    TYPE_CONE,
  };

typedef struct		s_coord
{
  float			x;
  float			y;
  float			z;
}			t_coord;

typedef struct		s_object
{
  enum e_type		type;
  t_coord		origin;
  float			rayon;
  t_coord		vector_1;
  t_coord		vector_2;
  float			angle;
  float			distance;
  unsigned char		color[3];
  struct s_object	*next;
}			t_object;

typedef struct		s_tmp_object
{
  char			*name;	/* equivalent du type */
  t_coord		origin;
  char			*rayon;
  t_coord		vector_1;
  t_coord		vector_2;
  char			*angle;
  unsigned char	       	color[3];
}			t_tmp_object;

typedef struct		s_array
{
  char			*str;
  enum e_type		type;
}			t_array;

typedef struct		s_light
{
  t_coord		origin;
  struct s_light	*next;
}			t_light;

typedef struct		s_eye
{
  t_coord		rotation;
  t_coord		origin;
}			t_eye;

typedef struct		s_ray
{
  float			intensity;
  t_coord		tab[2];
}			t_ray;

typedef struct		s_control
{
  t_eye			eye;
  t_object		*object;
  t_light		*light;
}			t_control;

typedef struct		s_type_object
{
  enum e_type		type;
  void			(*function)(t_ray *, t_object *);
}			t_type_object;

int		my_put_in_list_object(t_object **, t_tmp_object *, enum e_type);
int		which_object(t_object **, t_tmp_object *);
int		my_put_in_list_light(t_light **, char *, char *, char *);
int		display_object(t_object *);
int		which_object(t_object **, t_tmp_object *);
t_object	*my_put_in_list_object_next(t_object *, t_tmp_object *, enum  e_type);

#endif	/* !LINKED_LIST */
