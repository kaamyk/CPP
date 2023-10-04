# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/10/04 10:54:40 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animal

SRCDIR		=	sources

SRCS		=	$(wildcard $(SRCDIR)/*.cpp)

OBJDIR		=	.objects

OBJS		=	$(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

CCPP		=	c++

CFLAGS		=	-Wall -Wextra -Werror

CPPFLAGS	=	-std=c++98

VGFLAGS		=	-g3

all		:	$(OBJDIR) $(OBJS) $(NAME)

$(OBJDIR)		:
	mkdir $(OBJDIR)

$(OBJDIR)/%.o	:	$(SRCDIR)/%.cpp
	@clear
	@echo "Compiling " $<
	@sleep 0.1
	@clear
	@echo "Compiling " $< " ..."
	@$(CCPP) $(CFLAGS) $(CPPFLAGS) $(SFMLFLAGS) -c $< -o $@ 

$(NAME)	:	$(OBJS)
	@clear
	@echo -e '\033[0;34mCompiling executable ...\x1b[37m'
	@$(CCPP) $(CFLAGS) $(VGFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
	@echo -e '\033[0;34mremoving object directory ...\x1b[37m'
	@rm -rf $(OBJDIR)

fclean	:	clean
	@echo -e '\033[0;34mremoving executable files ...\x1b[37m'
	@rm -f $(NAME)

re		: fclean	all
