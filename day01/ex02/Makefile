# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 16:35:46 by amouhtal          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2021/09/09 14:45:26 by amouhtal         ###   ########.fr        #
=======
#    Updated: 2021/09/10 17:16:05 by amouhtal         ###   ########.fr        #
>>>>>>> day01
#                                                                              #
# **************************************************************************** #

NAME = brain
<<<<<<< HEAD
CC = g++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp %.hpp
=======
CC = clang++
FLAGS = -std=c++98 -Wall -Werror -Wextra
SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
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