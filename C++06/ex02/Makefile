# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/16 13:02:04 by cromalde          #+#    #+#              #
#    Updated: 2021/04/16 13:48:07 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		Makefile	#

NAME	=	identifier

SRC		=	./main.cpp \
			./Identifyer.cpp

OB		=	$(SRC:.cpp=.o)

CC		=	clang++
CFL		=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

.PHONY:	all fclean clean re

%.o: %.cpp
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME): $(OB)
	$(CC) $(CFL) $(OB) -o $(NAME)

clean:
	$(RM) $(OB)
fclean: clean
	$(RM) $(NAME)
re:	fclean all
