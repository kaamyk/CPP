# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by xuluu             #+#    #+#              #
#    Updated: 2023/08/31 10:46:01 by anvincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= phonebook

SRC 		= main.cpp Contact.cpp PhoneBook.cpp\

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
