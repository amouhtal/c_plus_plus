# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/09 15:04:45 by amouhtal          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2021/09/09 17:43:00 by amouhtal         ###   ########.fr        #
=======
#    Updated: 2021/09/12 12:44:03 by amouhtal         ###   ########.fr        #
>>>>>>> day01
#                                                                              #
# **************************************************************************** #

NAME = karen
<<<<<<< HEAD
CC = g++
FLAGS = -Wall -Wextra -Werror
SRCS = Karen.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp %.hpp
=======
CC = clang++
FLAGS = -std=c++98 -Wall -Werror -Wextra
SRCS = Karen.cpp main.cpp
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