# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 15:56:10 by cromalde          #+#    #+#              #
#    Updated: 2021/04/08 16:42:42 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		Makefile ex07

NAME	=	replace
SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	clang++
CFL		=	-Wall -Wextra -Werror
RM		=	rm -rf

.PHONY:	all clean fclean re

%.o: %.cpp
	$(CC) $(CFL) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFL) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re :	fclean all
