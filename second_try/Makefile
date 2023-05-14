# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 03:34:50 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/03/24 22:25:42 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

SRC = ft_printf.c \
	ft_printf_formats.c \
	ft_printf_utils.c

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(FLAGS) -c -g $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re:fclean all
