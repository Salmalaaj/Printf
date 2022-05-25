# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 20:18:21 by slaajour          #+#    #+#              #
#    Updated: 2021/12/14 16:49:06 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_hexaxp.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbrr.c \
		ft_putstr.c \

FLAGS = -Wall -Wextra -Werror
OBJS  = $(SRCS:.c=.o)

NAME  = libftprintf.a
RM    = rm -rf

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
