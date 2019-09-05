/*
** my_putnbr.c for  in /home/loofat_s/rendu/colle-5-K3V1M
** 
** Made by Steven Loo Fat
** Login   <loofat_s@epitech.net>
** 
** Started on  Wed May 27 21:20:05 2015 Steven Loo Fat
** Last update Sat Jun 20 14:17:23 2015 Steven Loo Fat
*/

#include "lib.h"

void	my_putnbr(int nb)
{
  int	i;
  int	tmp;

  i = 1;
  while (nb / i >= 10)
    i = i * 10;
  while (i >= 1)
    {
      tmp = nb / i;
      my_putchar(tmp + 48);
      nb = nb % i;
      i = i / 10;
    }
}
