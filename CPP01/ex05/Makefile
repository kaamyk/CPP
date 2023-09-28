# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/09/28 17:05:47 by anvincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harl

SRCS		=	main.cpp	Harl.cpp

OBJS		=	$(SRCS:.cpp=.o)

CCPP		=	c++

CFLAGS		=	-Wall -Wextra -Werror

CPPFLAGS	=	-std=c++98

VGFLAGS		=	-g

all		:	$(OBJS) $(NAME)

%.o		:	%.c
	@clear
	@echo "Compiling $< |"
	@sleep 0.1
	@clear
	@echo "Compiling $< /"
	@sleep 0.1
	@clear
	@echo "Compiling $< --"
	@sleep 0.1
	@clear
	@echo "Compiling $< \\"
	@clear
	@$(CCPP) $(CFLAGS) $(CPPFLAGS) -c $< -o $@ 

$(NAME)	:	$(OBJS)
	@clear
	@$(CCPP) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
	@echo "Deleting " $(OBJS) "..."
	@rm -f $(OBJS)

fclean	:	clean
	@echo "Deleting " $(NAME) "..."
	@rm -f $(NAME)
	@echo -e 'fclean : \x1b[32m>>> OK <<<\x1b[37m'

re		: fclean	all
