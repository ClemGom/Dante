##
## Makefile for  in /home/romain.pillot/projects/dante/astar
## 
## Made by romain pillot
## Login   <romain.pillot@epitech.net>
## 
## Started on  Thu Apr 27 13:48:20 2017 romain pillot
## Last update Thu May 11 13:19:16 2017 romain pillot
##

CC	=	gcc

NAME	=	generator

RM	=	rm -f

SRCS	=	src/main.c	\
		src/random.c	\
		src/buffer.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Iinc -g3 #-Werror -Wall -Wextra

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
