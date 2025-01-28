# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 03:35:22 by amanjon-          #+#    #+#              #
#    Updated: 2024/09/10 10:50:33 by amanjon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = c++
# 1.-
CFLAGS = -Wall -Wextra -Werror -std=c++98

# 2.-
# Para habilitar las advertencias de sombreado:
#CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

# 3.-
# Para desactivar las advertencias de sombreado:
#CFLAGS = -Wall -Wextra -Werror -Wno-shadow -std=c++98

SRCS =  srcs/main.cpp srcs/ClapTrap.cpp srcs/ScavTrap.cpp srcs/FragTrap.cpp  srcs/DiamondTrap.cpp
DEBUG = -g3 -fsanitize=address
OBJS = $(SRCS:srcs/%.cpp=objs/%.o)

# Construction of the executable and update obj if necessary
$(NAME): objs $(OBJS)
	$(CC) $(CFLAGS) $(DEBUG) $(OBJS) -o $(NAME)

all: $(NAME)

# Construction of object files (.o) from source files (.cpp)
objs/%.o: srcs/%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

objs:
	@mkdir -p	objs/

clean:
	@rm -rf	objs

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
