# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matcharr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 08:46:56 by matcharr          #+#    #+#              #
#    Updated: 2018/08/19 14:48:20 by matcharr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC=mathis

C=gcc

CFLAGS=-W -Wall -Wextra -Werror -c

SRC= /srcs/ft_putchar.c \
	 /srcs/ft_putstr.c \
	 /srcs/ft_strcmp.c \
	 /srcs/ft_strlen.c \
	 /srcs/ft_swap.c 

/* OBJ=$(SRC:.c=.o) */

all: $(EXEC)

hello: $(OBJ)
	$(C) -o $@ $^ $(CFLAGS)

main.o: .h

%.o: %.c
	$(C) -o $@ -c $< $(CFLAGS)
	ar rc -o
	ranlib libft.a

.PHONY: clean fclean

clean:
	rm -f *.o

fclean: clean
	rm -f $(EXEC)

re: fclean all

