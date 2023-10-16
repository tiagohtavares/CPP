# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 12:26:32 by ttavares          #+#    #+#              #
#    Updated: 2023/10/16 14:37:30 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM 			= rm -f

NAMES = main AMateria
SRCS = $(NAMES:=.cpp)
OBJS = $(NAMES:=.o)
NAME = Animal

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean
