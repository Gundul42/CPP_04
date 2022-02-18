# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 14:06:05 by graja             #+#    #+#              #
#    Updated: 2022/02/18 18:04:57 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01

SRCS	=	Animal.cpp Cat.cpp Dog.cpp Brain.cpp  main.cpp

CC	=	c++

FLAGS	=	-Wextra -Werror -Wall

$(NAME)	:	$(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all	:	$(NAME)

clean	:

fclean	:	
	rm -f $(NAME)

re	:	fclean all
