##
## Makefile for  in /home/loofat_s/rendu/MUL_2014_rtracer/linked_list
## 
## Made by Steven Loo Fat
## Login   <loofat_s@epitech.net>
## 
## Started on  Sat Jun 20 16:27:54 2015 Steven Loo Fat
## Last update Sun Jun 28 18:44:43 2015 Steven Loo Fat
##

CC	= gcc -g3

RM	= rm -f

NAME	= liblinked_list.a

SRCS	= display_list.c \
	  my_put_in_list_end.c	 

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Wall -Wextra -Werror
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
