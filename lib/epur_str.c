/*
** epur_str.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Wed Jun 17 14:17:57 2015 Steven Loo Fat
** Last update Sun Jun 28 18:35:34 2015 Steven Loo Fat
*/

#include "lib.h"

char	*epur_str(char *str)
{
  replace_charactere(str, '\t', ' ');
  delete_char_before_word(str, ' ');
  delete_double_char(str, ' ');
  delete_char_after_word(str, ' ');
  return (str);
}
