# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 12:56:04 by ttavares          #+#    #+#              #
#    Updated: 2023/09/25 11:03:20 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= c++ -Wall -Wextra -Werror -std=c++98
RM	= rm -f

NAMES = main Harl
SRCS = $(NAMES:=.cpp)
OBJS = $(NAMES:=.o)
NAME = harl

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean
