#
#  Author: Johan Thay Nam
#  Create Time: 2020-11-13 17:31:12
#  Modified by: Johan Thay Nam
#  Modified time: 2020-11-14 11:38:47
#  Description:
#

NAME		=	libmy.a

SRC			=	src/my_putchar.c	\
				src/my_putstr.c		\
				src/my_strlen.c

OBJ			=	$(SRC:.c=.o)

CFLAGS		=	-pedantic -W -Wall

RM			=	/bin/rm

CC			=	/usr/bin/gcc

all			:	$(OBJ)
				ar r $(NAME) $(OBJ) 

clean		:
				$(RM) -f $OBJ

fclean		:	clean
				$(RM) -f $(NAME)

tests		:
				$(CC)
