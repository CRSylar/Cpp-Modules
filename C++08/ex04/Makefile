# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/20 14:24:23 by cromalde          #+#    #+#              #
#    Updated: 2021/04/20 14:27:49 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Makefile

NAME	=	Polander

SRC		=	./main.cpp
OB	=	$(SRC:.cpp=.o)

CC	=	clang++
CLF	=	-Wall -Wextra -Werror -std=c++98

RM	=	rm -rf
.PHONY:	all clean fclean re

%.o:%.cpp
	$(CC) $(CLF) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OB)
	$(CC) $(CLF) $(OB) -o $(NAME)

clean:
	$(RM) $(OB)
fclean:	clean
	$(RM) $(NAME)
re: fclean all
