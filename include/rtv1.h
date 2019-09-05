/*
** rtv1.h for  in /home/loofat_s/rendu/MUL_2014_rtracer/include
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Sun Jun 21 16:20:44 2015 Steven Loo Fat
** Last update Mon Jun 29 14:13:03 2015 Steven Loo Fat
*/

#ifndef RTV1_H_
# define RTV1_H_
# define WIN_X 1900
# define WIN_Y 1000
# define BACKGROUND 0x000000
# define SPHERE 0xFF0000
# define PLAN 0x3300FF
# define SIZE 10
# define PI 3.14159265359
# define LIMIT 9
# define INFINI 99999999999
# define CONVERT(a) ((a * PI) / 180)
# define CARRE(a) ((a * a))
# define DELTA(a, b, c) (CARRE(b) - (4 * a * c))
# define MIN(a, b) ((a < b) && (a > 0) ? (a) : (b))
# define MAX(a, b) ((a > b) ? a : b)

typedef struct	s_img
{
  void		*image_ptr;
  char		*data;
  int		sizeline;
  int		bpp;
  int		endian;
}		t_img;

typedef struct	s_init
{
  void		*mlx_ptr;
  void		*win_ptr;
  t_img		image;
}		t_init;

int		initialized();
int		calc(int , int , t_control *);
int		calc_next(int **);
int		init_remplis_image(t_init *);
int		remplis_image(t_init *, t_control *);
int		implement_light(t_control *);
int		find_intersection(t_control *, t_ray *);
int		find_color(t_object *, float);
char		**malloc_first_dimension(char **, int);
char		*malloc_second_dimension(char *, int);
void		create_ray(int , int , t_ray *, t_control *);
void		produit_vectoriel(t_coord *, t_coord *, t_coord*);
void		inter_sphere(t_ray *, t_object *);
void		inter_plan(t_ray *, t_object *);
void		init_cylindre(t_coord *, t_ray *, t_object *);
void		inter_cylindre(t_ray *, t_object *);
void		init_cone(t_coord *, t_ray *, t_object *, float *);
void		inter_cone(t_ray *, t_object *);
void		get_impact(t_coord *, t_ray *, float);
void		which_intersection_function(t_ray *, t_object *);
void		norm(t_coord *);
float		produit_scallaire(t_coord *, t_coord *);
float		norme(t_coord *);
float		**fidding_matrice(float **, float , float);
float		**create_tab_matrice(int, int);
char		*str_error(char *, char *);
t_object	*first_object(t_object *, t_ray *, float, float);

#endif	/* !RTV1_H_ */
