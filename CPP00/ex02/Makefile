# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by xuluu             #+#    #+#              #
#    Updated: 2023/09/19 12:32:46 by anvincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= account

SRC 		= tests.cpp	Account.cpp

OBJ 		= $(SRC:.cpp=.o)

CC			= g++

CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98

all 	: $(NAME)

%.o		: %.c
		$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) :	$(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@clear

clean 	:
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re		: fclean	all
