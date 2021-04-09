# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/09 10:25:38 by cromalde          #+#    #+#              #
#    Updated: 2021/04/09 10:29:00 by cromalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#		Makefile	cato9tails(ex10)

NAME	=	cato9tails
SRC		=	main.cpp
OB		=	$(SRC:.cpp=.o)
CC		=	clang++
CFL		=	-Wall -Wextra -Werror
RM		=	rm -rf

.PHONY:	re fclean clean all

%.o: %.cpp
	$(CC) $(CFL) -c $^ -o $@

all : $(NAME)

$(NAME): $(OB)
	$(CC) $(CFL) $(OB) -o $(NAME)

clean:
	$(RM) $(OB)
fclean:	clean
	$(RM) $(NAME)
re :	fclean all
