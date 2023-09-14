# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/09/11 14:01:22 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harlFilter

SRCS		=	main.cpp

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
	@$(CCPP) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
	@echo "Deleting " $(OBJS) "..."
	@rm -f $(OBJS)

fclean	:	clean
	@echo "Deleting " $(NAME) "..."
	@rm -f $(NAME)
	@echo "fclean : >>> OK <<<"

re		: fclean	all
