##
## Makefile for  in /home/loofat_s/rendu/MUL_2014_rtracer
## 
## Made by Steven Loo Fat
## Login   <loofat_s@epitech.net>
## 
## Started on  Fri Jun 19 16:25:52 2015 Steven Loo Fat
## Last update Sun Jun 28 18:56:49 2015 Steven Loo Fat
##

CC	= gcc -g3

RM	= rm -f

NAME	= rtv1

SRCS	= source/cone_function.c \
	  source/calc.c \
	  source/find_matrice.c \
	  source/inter_function.c \
	  source/which_value.c \
	  source/maths_function.c \
	  source/get_impact.c \
	  source/find_color.c \
	  source/light_function.c \
	  source/main.c

OBJS	= $(SRCS:.c=.o)	

CFLAGS	+= -Wall -Wextra -Werror
CFLAGS	+= -I./include/
LDFLAGS	= -L./lib/ -L./linked_list/ -L./parsing/ -lm -lmlx -lparsing -llinked_list -lX11 -lXext -lmy

all: $(NAME)

$(NAME): $(OBJS)
	@printf "\033[032m --- [FOLDER]lib ---\033[0m\n"
	cd lib ; make
	@printf "\033[032m --- [FOLDER]linked_list---\033[0m\n"
	cd linked_list ; make
	@printf "\033[032m --- [FOLDER]parsing---\033[0m\n"
	cd parsing ; make
	@printf "\033[032m --- COMPILING FOR RTV1---\033[0m\n"
	cd source ; make

clean:
	cd lib ; make clean
	cd linked_list ; make clean
	cd parsing ; make clean
	cd source ; make clean

fclean:	clean
	cd lib ; make fclean
	cd linked_list ; make fclean
	cd parsing ; make fclean
	cd source ; make fclean

re: clean fclean all

.PHONY: all clean fclean re
