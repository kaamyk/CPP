# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/10/09 17:35:35 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	claptrap

SRCDIR		=	sources

SRCS		=	$(wildcard $(SRCDIR)/*.cpp)

OBJDIR		=	.obj

OBJS		=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

CCPP		=	c++

CFLAGS		=	-Wall -Wextra -Werror

VGFLAGS		=	-g

all				:	$(OBJDIR) $(OBJS) $(NAME)

$(OBJDIR)		:
	mkdir $(OBJDIR)

$(OBJDIR)/%.o	:	$(SRCDIR)/%.cpp
	@clear
	@echo "Compiling " $< " ..."
	@$(CCPP) $(CFLAGS) $(CPPFLAGS) $(SFMLFLAGS) -c $< -o $@ 
	@clear
	@echo -e 'Compiling ' $< ' \x1b[32m>>> OK <<<\x1b[37m'
	@sleep 0.1

$(NAME)			:	$(OBJS)
	@clear
	@echo 'Compiling executable ...'
	@clear
	@$(CCPP) $(VGFLAGS) $(CFLAGS) $(CPPFLAGS) $(OBJS) $(SFMLFLAGS) -o $(NAME)
	@echo -e 'Compiling ' $(NAME) ' \x1b[32m>>> OK <<<\x1b[37m'
	@sleep 0.5
	@clear

clean			:
	@echo 'Removing object files ...'
	@rm -rf $(OBJDIR)
	@clear
	@echo -e 'Removing object files \x1b[32m>>> OK <<<\x1b[37m'

fclean			:	clean
	@echo -e 'Removing executable files ...'
	@rm -f $(NAME)
	clear
	@echo -e 'Removing executable files \x1b[32m>>> OK <<<\x1b[37m'
	@sleep 1
	@clear

re		: fclean	all
