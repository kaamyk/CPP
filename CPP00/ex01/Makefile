# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by xuluu             #+#    #+#              #
#    Updated: 2023/08/30 18:00:27 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= phonebook

SRC 		= main.cpp Contact.cpp\

OBJ 		= $(SRC:.cpp=.o)

CC			= c++

CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g3

all 	: $(NAME)

%.o		: %.c
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) :	$(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean 	:
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re		: fclean	all
