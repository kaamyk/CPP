# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/09/27 17:20:57 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		brainz

SRCS =		main.cpp	Weapon.cpp	HumanA.cpp	HumanB.cpp

OBJS =		$(SRCS:.cpp=.o)

CPPC = 		c++

CFLAGS =	-Wall -Wextra -Werror

CPPFLAGS =	-std=c++98

VGFLAGS = 	-g

all		: $(OBJS) $(NAME)

%.o		: %.cpp
		@echo "Compiling" $< "..."
		@$(CPPC) $(CPPFLAGS) -c $< -o $@

$(NAME)	: $(OBJS)
		@echo "Source files compiled => >>> OK <<<"
		@$(CPPC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

vg	 	: $(OBJS)
		@$(CPPC) $(CFLAGS) $(CPPFLAGS) $(VGFLAGS) $(OBJS) -o $(NAME)
clean	:
	@echo "Removing objects files ..."
	rm -f $(OBJS)
	@clear
	@echo "Objects files removed => >>> OK <<<"

fclean	: clean
	@echo "Removing executable ..."
	rm -f $(NAME)
	@echo "Executable removed => >>> OK <<<"

re		: fclean	all
