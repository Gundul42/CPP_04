# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 14:06:05 by graja             #+#    #+#              #
#    Updated: 2022/02/19 14:32:00 by graja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex03

SRCS	=	AMateria.cpp Ice.cpp main.cpp

CC	=	c++

FLAGS	=	-Wextra -Werror -Wall

$(NAME)	:	$(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all	:	$(NAME)

clean	:

fclean	:	
	rm -f $(NAME)

re	:	fclean all
