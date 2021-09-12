# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
<<<<<<< HEAD
#    MAKEFILE                                           :+:      :+:    :+:    #
=======
#    Makefile                                           :+:      :+:    :+:    #
>>>>>>> day01
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 16:35:51 by amouhtal          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2021/09/09 15:03:34 by amouhtal         ###   ########.fr        #
=======
#    Updated: 2021/09/12 12:43:49 by amouhtal         ###   ########.fr        #
>>>>>>> day01
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence
<<<<<<< HEAD
CC = g++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp %.hpp
=======
CC = clang++
FLAGS = -std=c++98 -Wall -Werror -Wextra
SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp *.hpp
>>>>>>> day01
	$(CC) $(FLAGS) -c $< -o $@
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re : fclean all
