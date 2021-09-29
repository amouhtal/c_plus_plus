
NAME = scavtrap
CC = clang++
FLAGS = -std=c++98 -Wall -Werror -Wextra
SRCS = main.cpp ScavTrap.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp *.hpp
	$(CC) $(FLAGS) -c $< -o $@
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re : fclean all