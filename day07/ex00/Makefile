# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 18:05:55 by amouhtal          #+#    #+#              #
#    Updated: 2021/10/25 18:06:31 by amouhtal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template
CC = clang++
FLAGS = -std=c++98 -Wall -Werror -Wextra
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp *.hpp
	$(CC) $(FLAGS) -c $< -o $@
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all