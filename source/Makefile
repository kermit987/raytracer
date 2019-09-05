##
## Makefile for  in /home/loofat_s/rendu/MUL_2014_rtracer/source
## 
## Made by Steven Loo Fat
## Login   <loofat_s@epitech.net>
## 
## Started on  Sun Jun 28 18:44:19 2015 Steven Loo Fat
## Last update Mon Jun 29 10:44:27 2015 Steven Loo Fat
##

CC	= gcc -g

RM	= rm -f

NAME	= rtv1

SRCS	= cone_function.c \
	  calc.c \
	  find_matrice.c \
	  inter_function.c \
	  which_value.c \
	  maths_function.c \
	  get_impact.c \
	  find_color.c \
	  light_function.c \
	  main.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Wall -Wextra -Werror
CFLAGS	+= -I../include/

LDFLAGS	= -L../lib/ -L../linked_list/ -L../parsing/ -lm -lmlx -lparsing -llinked_list -lX11 -lXext -lmy

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean clean all

.PHONY: all clean fclean re
