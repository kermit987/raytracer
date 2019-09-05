##
## Makefile for  in /home/loofat_s/rendu/MUL_2014_rtracer/lib
## 
## Made by Steven Loo Fat
## Login   <loofat_s@epitech.net>
## 
## Started on  Sat Jun 20 14:19:34 2015 Steven Loo Fat
## Last update Sun Jun 28 13:04:56 2015 Steven Loo Fat
##

CC	= gcc -g3

RM	= rm -f

NAME	= libmy.a

SRCS	= delete_char_after_word.c \
	  delete_char_before_word.c \
	  delete_double_char.c \
	  epur_str.c \
	  error.c \
	  free_char_tab.c \
	  free_int_tab.c \
	  get_next_line.c \
	  how_many_word.c \
	  my_getnbr.c \
	  my_memset.c \
	  my_putchar.c \
	  my_putstr.c \
	  my_putnbr.c \
	  my_realloc.c \
	  my_strcat.c \
	  my_strcmp.c \
	  my_strncmp.c \
	  my_strcpy.c \
	  my_strdup.c \
	  my_str_isnum.c \
	  my_strlen.c \
	  my_strncpy.c \
	  few_argv_error.c \
	  replace_charactere.c \
	  str_to_wordtab.c \
	  t_light_error.c \
	  my_strndup.c \
	  color_error.c \
	  eye_error.c \
	  t_object_error.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Wall -Werror -Wextra
CFLAGS	+= -I../include/ -lm

all: $(NAME)

$(NAME): $(OBJS)
	 ar rc $(NAME) $(OBJS)
	 ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean clean all

.PHONY: all clean fclean re
