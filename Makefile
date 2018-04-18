# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tclavet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/14 15:16:23 by tclavet           #+#    #+#              #
#    Updated: 2018/04/14 15:20:16 by tclavet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./srcs
HEADER = ./includes/
ROOT = ./
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = ft_memset.c \
		ft_bzero.c
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(OPTION) $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
