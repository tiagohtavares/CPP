# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 12:26:32 by ttavares          #+#    #+#              #
#    Updated: 2024/03/22 15:43:31 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM 			= rm -f

NAMES = main BitCoin
SRCS = $(NAMES:=.cpp)
OBJS = $(NAMES:=.o)
NAME = btc

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean
