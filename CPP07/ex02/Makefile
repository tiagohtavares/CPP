# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 12:26:32 by ttavares          #+#    #+#              #
#    Updated: 2024/02/19 18:49:57 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM 			= rm -f

NAMES = main
SRCS = $(NAMES:=.cpp)
OBJS = $(NAMES:=.o)
NAME = template

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean
