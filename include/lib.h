/*
** lib.h for  in /home/loofat_s/rendu/MUL_2014_rtracer/include
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Fri Jun 19 16:31:09 2015 Steven Loo Fat
** Last update Sun Jun 28 13:05:24 2015 Steven Loo Fat
*/

#ifndef LIB_H_
# define LIB_H_

#include "linked_list.h"

void	delete_char_after_word(char *, char);
void	delete_char_before_word(char *, char);
void	delete_double_char(char *, char);
void	my_memset(char *, const int, const int);
void	my_putchar(const char);
void	free_char_tab(char **);
void	free_int_tab(int **);
void	my_putnbr(int);
void	my_putstr(const char*);
void	my_strcpy(char *, char *);
void	my_strncpy(char *, char *, int);
void	replace_charactere(char *, char, char);
char	*epur_str(char *);
char	*str_error(char *, char *);
char	*get_next_line_next(char *, char *, int , const int);
char	*get_next_line(const int);
char	*my_realloc(char *, int);
char	*my_strcat(char *, char *);
char	*my_strdup(char *);
char	*my_strndup(char *, int);
char	*malloc_second_dimension(char *, int);
char	**malloc_first_dimension(char **, int);
char	**fidding_second_dimension(char **, char *, int, char);
char	**str_to_wordtab(char *, char);
int	int_error(char *, char *);
int	how_many_word(char *);
int	negative(const char *);
int	positive(const char *);
int	my_getnbr(char *);
int	my_strcmp(char *, char *);
int	my_str_isnum(char *, int);
int	my_strlen(const char *);
int	my_strncmp(char *, char *, int);
int	few_argv_error(char *);
int	color_error(int);
int	eye_error();
t_light		*t_light_error(char *, char *);
t_object	*t_object_error(char *, char *);

#endif	/* !LIB_H */
