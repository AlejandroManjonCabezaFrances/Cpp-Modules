# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 10:33:59 by amanjon-          #+#    #+#              #
#    Updated: 2024/07/18 09:56:56 by amanjon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =  srcs/main.cpp srcs/Phonebook.cpp srcs/Contact.cpp
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


r: run
run: all
	@./$(NAME)

# without -fsanitize=address to valgrind
v: valgrind
valgrind: all
	@valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re r run v valgrind
