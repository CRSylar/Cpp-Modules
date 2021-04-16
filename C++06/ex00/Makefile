# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/16 09:37:41 by cromalde          #+#    #+#              #
#    Updated: 2021/04/16 11:27:30 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		Makefile	#

NAME	=	scalar_conversion

SRC		=	./main.cpp \
			./caster.cpp

OB		=	$(SRC:.cpp=.o)

CC		=	clang++
CFL		=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

.PHONY:	all fclean clean re

%.o: %.c
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OB)
	$(CC) $(CFL) $(OB) -o $(NAME)

clean:
	$(RM) $(OB)

fclean : clean
	$(RM) $(NAME)

re : fclean all
