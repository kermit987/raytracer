/*
** my_getnbr.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Tue Jun 16 15:38:51 2015 Steven Loo Fat
** Last update Sun Jun 28 18:37:22 2015 Steven Loo Fat
*/

#include <stdio.h>
#include "lib.h"

int	perso_strlen(const char *str, const char end)
{
  int	i;

  i = 0;
  while (str[i] != end && str[i] != '\0')
    i++;
  return (i);
}

int	negative(const char *str)
{
  int	size;
  int	i;
  int	div;
  int	result;

  i = 1;
  if (my_strlen(str) >= 7)
    return (int_error("int overflow", "my_getnbr"));
  size = my_strlen(str) - 1;
  div = 1;
  result = 0;
  while (i != size)
    {
      div = div * 10;
      ++i;
    }
  i = 1;
  while (str[i] != '\0')
    {
      result = result + (str[i] - 48) * div;
      ++i;
      div = div / 10;
    }
  return (0 - result);
}

int	positive(const char *str)
{
  int	size;
  int	i;
  int	div;
  int	result;

  i = 0;
  if (my_strlen(str) >= 8)
    return (int_error("int overflow", "my_getnbr"));
  size = perso_strlen(str, '.') - 1;
  div = 1;
  result = 0;
  while (i != size)
    {
      div = div * 10;
      ++i;
    }
  i = 0;
  while (str[i] != '\0')
    {
      result = result + (str[i] - 48) * div;
      ++i;
      div = div / 10;
    }
  return (result);
}

int	my_getnbr(char *str)
{
  if (str[0] == '-')
    return (negative(str));
  return (positive(str));
}
