/*
** parsing.h for  in /home/loofat_s/rendu/MUL_2014_rtracer/parsing
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Sun Jun 21 14:37:44 2015 Steven Loo Fat
** Last update Mon Jun 29 11:06:43 2015 Steven Loo Fat
*/

#ifndef PARSING_H_
# define PARSING_H_
#include "linked_list.h"

int	init_parsing_light(t_light **, char *, int);
int	parsing_light(t_light **, char *, int, char **);
int	init_parsing_object(t_object **, char *, int, int);
int	parsing_object(t_object **, int, char *);
int	parsing_object_next(t_object **, char **, int);
int	init_parsing(t_control *, int);
int	parsing(t_control *, int, char **, char *);
t_eye	*init_parsing_eyes(t_eye *, char *, int);
t_eye	*parsing_eyes(t_eye *, char *, int, char **);

#endif	/* !PARSING_H_ */
