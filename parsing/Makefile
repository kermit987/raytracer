##
## Makefile for  in /home/loofat_s/rendu/MUL_2014_rtracer/parsing
## 
## Made by Steven Loo Fat
## Login   <loofat_s@epitech.net>
## 
## Started on  Fri Jun 19 13:34:35 2015 Steven Loo Fat
## Last update Thu Jun 25 13:12:26 2015 Steven Loo Fat
##

CC	= gcc -g3

RM	= rm -f

NAME	= libparsing.a

SRCS	= parsing_object.c \
	  parsing_light.c \
	  parsing_eye.c \
	  parsing.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Wall -Werror -Wextra
CFLAGS	+= -I../include/

all: $(NAME)

$(NAME): $(OBJS)
	 ar -rc $(NAME) $(OBJS)
	 ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean clean all

.PHONY: all clean fclean re

