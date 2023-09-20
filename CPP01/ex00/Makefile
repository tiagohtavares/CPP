# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 12:26:32 by ttavares          #+#    #+#              #
#    Updated: 2023/09/20 14:37:54 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= c++ -Wall -Wextra -Werror -std=c++98
RM	= rm -f

NAMES = main newZombie randomChump Zombie
SRCS = $(NAMES:=.cpp)
OBJS = $(NAMES:=.o)
NAME = zombie

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean
