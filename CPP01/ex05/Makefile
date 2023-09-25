# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 12:56:04 by ttavares          #+#    #+#              #
#    Updated: 2023/09/25 15:10:36 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM 			= rm -f

NAMES = main Harl
SRCS = $(NAMES:=.cpp)
OBJS = $(NAMES:=.o)
NAME = harl

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean
