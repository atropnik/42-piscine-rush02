# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atropnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 13:10:01 by atropnik          #+#    #+#              #
#    Updated: 2019/01/27 19:57:31 by fjankows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-04
SRC = *.c rush00_exercises/*.c lib/*.c
CFLAGS = -Wall -Wextra -Werror # -g -fsanitize=undefined,address

all:
	gcc $(CFLAGS) -c $(SRC)
	gcc $(CFLAGS) -o $(NAME) *.o

t: fclean all
	cat test.txt | ./$(NAME)
	$(MAKE) clean

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
