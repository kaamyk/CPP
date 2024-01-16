# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/11/07 14:31:19 by anvincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PmergeMe

SRCDIR		=	sources

# SRCS		=	$(wildcard $(SRCDIR)/*.cpp)
SRCS		=	$(SRCDIR)/main.cpp	$(SRCDIR)/PmergeMe.cpp

OBJDIR		=	.obj

OBJS		=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

CCPP		=	g++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

VGFLAGS		=	-g3

all				:	$(OBJDIR) $(OBJS) $(NAME)

$(OBJDIR)		:
	@mkdir $(OBJDIR)

$(OBJDIR)/%.o	:	$(SRCDIR)/%.cpp
	@echo -n "Compiling " $< " ..."
	@$(CCPP) $(VGFLAGS) $(CFLAGS) $(CPPFLAGS) $(SFMLFLAGS) -c $< -o $@ 
	@echo -e ' \x1b[32m>>> OK <<<\x1b[37m'

$(NAME)			:	$(OBJS)
	@clear
	@echo -e '\033[0;34mObjects compilation : \x1b[32m>>> OK <<<\x1b[37m'
	@echo -e '\033[0;34mCompiling executable ...\x1b[37m'
	@clear
	@$(CCPP) $(VGFLAGS) $(CFLAGS) $(CPPFLAGS) $(OBJS) $(SFMLFLAGS) -o $(NAME)
	@echo -e 'Compiling ' $(NAME) ' \x1b[32m>>> OK <<<\x1b[37m'

clean			:
	@echo -n 'Removing object files ...'
	@rm -rf $(OBJDIR)
	@clear
	@echo -e ' \x1b[32m>>> OK <<<\x1b[37m'

fclean			:	clean
	@echo -e 'Removing executable files ...'
	@rm -f $(NAME)
	clear
	@echo -e 'Removing executable files \x1b[32m>>> OK <<<\x1b[37m'
	@sleep 0.3
	@clear

re		: fclean	all
