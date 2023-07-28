# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by xuluu             #+#    #+#              #
#    Updated: 2023/07/28 17:00:21 by anvincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= megaphone

SRC 		= megaphone.cpp \

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
