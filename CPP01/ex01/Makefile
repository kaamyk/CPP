# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/09/06 16:16:04 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		brainz

SRCS =		main.cpp	Zombie.cpp	zombieHorde.cpp

OBJS =		$(SRCS:.cpp=.o)

CPPC = 		c++

CFLAGS =	-Wall -Wextra -Werror

CPPFLAGS =	-std=c++98

VGFLAGS = 	-g

all		: $(OBJS) $(NAME)

%.o		: %.cpp
		@clear
		@echo "Compiling sources files "
		@clear
		@echo "Compiling sources files ."
		@clear
		@echo "Compiling sources files .."
		@clear
		@echo "Compiling sources files ..."
		@$(CPPC) $(CPPFLAGS) -c $< -o $@
		@echo "Source files compiled => >>> OK <<<"

$(NAME)	: $(OBJS)
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
