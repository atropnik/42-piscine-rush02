# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atropnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 13:10:01 by atropnik          #+#    #+#              #
#    Updated: 2019/01/27 22:51:26 by atropnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = *.c rush00_validators/*.c lib/*.c
CFLAGS = -Wall -Wextra -Werror # -g -fsanitize=undefined,address

all: colle-2 00 01 02 03 04

colle-2:
	gcc $(CFLAGS) -c $(SRC)
	gcc $(CFLAGS) -o $(NAME) *.o

00:
	gcc -Wall -Wextra -Werror rush00_files/main.c rush00_files/ft_putchar.c rush00_files/rush$@.c -o colle-$@

01:
	gcc -Wall -Wextra -Werror rush00_files/main.c rush00_files/ft_putchar.c rush00_files/rush$@.c -o colle-$@

02:
	gcc -Wall -Wextra -Werror rush00_files/main.c rush00_files/ft_putchar.c rush00_files/rush$@.c -o colle-$@

03:
	gcc -Wall -Wextra -Werror rush00_files/main.c rush00_files/ft_putchar.c rush00_files/rush$@.c -o colle-$@

04:
	gcc -Wall -Wextra -Werror rush00_files/main.c rush00_files/ft_putchar.c rush00_files/rush$@.c -o colle-$@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f colle-0*

re: fclean all
