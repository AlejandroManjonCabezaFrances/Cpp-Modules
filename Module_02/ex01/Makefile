# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 12:42:39 by amanjon-          #+#    #+#              #
#    Updated: 2024/07/07 12:42:55 by amanjon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =  srcs/main.cpp srcs/Fixed.cpp
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