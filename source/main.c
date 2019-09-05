/*
** main.c for  in /home/loofat_s/rendu/MUL_2014_rtracer
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Apr 24 14:13:04 2015 Steven Loo Fat
** Last update Mon Jun 29 14:20:57 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "lib.h"
#include "linked_list.h"
#include "parsing.h"
#include "rtv1.h"
#include "mlx.h"

int	key(int keycode)
{
  if (keycode == 65307)
    exit(0);
  return (0);
}

int		remplis_image(t_init *init, t_control *control)
{
  int		x;
  int		y;
  int		value;

  y = 0;
  while (y < WIN_Y)
    {
      x = 0;
      while (x < WIN_X)
	{
	  if ((value = calc(x, y, control)) == -1)
	    return (-1);
	  mlx_pixel_put(init->mlx_ptr, init->win_ptr, x, y, value);
	  x++;
	}
      y++;
    }
  return (0);
}

int		init_remplis_image(t_init *init)
{
  t_control	control;
  int		fd;

  control.object = NULL;
  control.light = NULL;
  if ((fd = open("fichier", O_RDWR | S_IRUSR)) == -1)
    return (int_error("open", "init_parsing"));
  if (init_parsing(&control, fd) == -1)
    {
      close(fd);
      return (-1);
    }
  if ((remplis_image(init, &control)) == -1)
    {
      free(control.object);
      free(control.light);
      close(fd);
      return (-1);
    }
  free(control.object);
  free(control.light);
  close(fd);
  return (0);
}

int		initialized()
{
  t_init	init;

  init.image.sizeline = 0;
  init.image.bpp = 30;
  init.image.endian = 0;
  if ((init.mlx_ptr = mlx_init()) == NULL)
    return (-1);
  init.win_ptr = mlx_new_window(init.mlx_ptr, WIN_X, WIN_Y, "windows");
  init.image.image_ptr = mlx_new_image(init.mlx_ptr, WIN_X, WIN_Y);
  init.image.data = mlx_get_data_addr(init.image.image_ptr,
				      &init.image.bpp, &init.image.sizeline,
				      &init.image.endian);
  mlx_put_image_to_window(init.mlx_ptr, init.win_ptr,
			  init.image.image_ptr, 0, 0);
  if (init.mlx_ptr)
    if ((init_remplis_image(&init)) == -1)
      return (-1);
  mlx_key_hook(init.win_ptr, key, NULL);
  mlx_loop(init.mlx_ptr);
  return (0);
}

int		main()
{
  initialized();
  return (0);
}
