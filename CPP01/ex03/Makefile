# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 17:59:08 by anvincen          #+#    #+#              #
#    Updated: 2023/09/28 16:32:32 by anvincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		weapon

SRCS =		main.cpp	Weapon.cpp	HumanA.cpp	HumanB.cpp

OBJS =		$(SRCS:.cpp=.o)

CPPC = 		c++

CFLAGS =	-Wall -Wextra -Werror

CPPFLAGS =	-std=c++98

VGFLAGS = 	-g

all		: $(OBJS) $(NAME)

%.o		: %.cpp
		@clear
		@echo "Compiling sources files |"
		@sleep 0.1
		@clear
		@echo "Compiling sources files /"
		@sleep 0.1
		@clear
		@echo "Compiling sources files --"
		@sleep 0.1
		@clear
		@echo "Compiling sources files \\"
		@clear
		@$(CPPC) $(CPPFLAGS) -c $< -o $@

$(NAME)	: $(OBJS)
		@echo -e 'Source files compiled => \x1b[32m>>> OK <<<\x1b[37m'
		@$(CPPC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

vg	 	: $(OBJS)
		@$(CPPC) $(CFLAGS) $(CPPFLAGS) $(VGFLAGS) $(OBJS) -o $(NAME)
clean	:
	@echo "Removing objects files ..."
	rm -f $(OBJS)
	@clear
	@echo -e 'Objects files removed => \x1b[32m>>> OK <<<\x1b[37m'

fclean	: clean
	@echo "Removing executable ..."
	rm -f $(NAME)
	@echo -e 'Executable removed => \x1b[32m>>> OK <<<\x1b[37m'

re		: fclean	all
