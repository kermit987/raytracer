/*
** str_to_wordtab.c for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Wed Jun 17 15:28:50 2015 Steven Loo Fat
** Last update Sat Jun 20 14:44:02 2015 Steven Loo Fat
*/

#include <stdlib.h>
#include "lib.h"

char	**malloc_first_dimension(char **final, int nb_word)
{
  if ((final = malloc(sizeof(char *) * (nb_word + 1))) == NULL)
    {
      my_putstr("Error: Malloc in the first dimension failed\n");
      return (NULL);
    }
  return (final);
}

char	*malloc_second_dimension(char *final, int size)
{
  if ((final = malloc(sizeof(char) * (size + 1))) == NULL)
    {
      my_putstr("Error: Malloc in the first dimension failed\n");
      return (NULL);
    }
  return (final);
}

char	**fidding_second_dimension(char **final, char *str,
				   int nb_word, char delimiter)
{
  int	i;
  int	begin;
  int	end;

  begin = 0;
  end = 0;
  i = 0;
  while (i != nb_word)
    {
      while (str[begin] != delimiter && str[begin] != '\0')
	begin++;
      if ((final[i] = malloc_second_dimension(final[i], begin - end)) == NULL)
	return (NULL);
      my_strncpy(&str[end], final[i], begin - end);
      begin++;
      end = begin;
      i++;
    }
  final[i] = NULL;
  return (final);
}

char	**str_to_wordtab(char *str, char delimiter)
{
  char	**final;
  int	nb_word;

  final = NULL;
  nb_word = 1;
  str = epur_str(str);
  nb_word = nb_word + how_many_word(str);
  final = malloc_first_dimension(final, nb_word);
  final = fidding_second_dimension(final, str, nb_word, delimiter);
  return (final);
}
