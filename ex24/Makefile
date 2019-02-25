# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hstiv <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 19:35:57 by hstiv             #+#    #+#              #
#    Updated: 2018/12/31 13:49:55 by hstiv            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAMESRC = libsource

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

HEADER := include/

SRC := srcs/*.c

AR = ar rc


all: libft.a

$(NAMESRC):
	    gcc $(CFLAGS) $(SRC) -I $(HEADER)

$(NAME): $(NAMESRC)
	    $(AR) $@ *.o

clean:
	    rm -f *.o ~Makefile

fclean: clean
	    rm -f $(NAME) $(NAMESRC)

re: fclean all
