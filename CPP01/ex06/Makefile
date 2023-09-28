# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/09/28 17:34:06 by anvincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harlFilter

SRCS		=	main.cpp	Harl.cpp

OBJS		=	$(SRCS:.cpp=.o)

CCPP		=	c++

CFLAGS		=	-Wall -Wextra -Werror

CPPFLAGS	=	-std=c++98

VGFLAGS		=	-g

all		:	$(OBJS) $(NAME)

%.o		:	%.c
	@$(CCPP) $(CFLAGS) $(CPPFLAGS) -c $< -o $@ 
	@echo "Compiling " $< "..."

$(NAME)	:	$(OBJS)
	@clear
	@$(CCPP) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
	@echo "Deleting " $(OBJS) "..."
	@rm -f $(OBJS)

fclean	:	clean
	@echo "Deleting " $(NAME) "..."
	@rm -f $(NAME)
	@echo "fclean : >>> OK <<<"

re		: fclean	all
