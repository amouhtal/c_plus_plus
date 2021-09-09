# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/09 15:05:07 by amouhtal          #+#    #+#              #
#    Updated: 2021/09/09 17:39:34 by amouhtal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen
CC = g++
FLAGS = -Wall -Wextra -Werror
SRCS = Karen.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp %.hpp
	$(CC) $(FLAGS) -c $< -o $@
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re : fclean all