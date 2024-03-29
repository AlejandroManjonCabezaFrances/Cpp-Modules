NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -I inc
SRC =  src/megaphone.cpp
OBJS = $(SRC:%.cpp=objs/%.o)

all: $(NAME)

# Construction of the executable and update obj if necessary
$(NAME): objs $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

objs:
	@mkdir -p	objs/src

# Construction of object files (.o) from source files (.cpp)
objs/%.o: src%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
