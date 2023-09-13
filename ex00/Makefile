# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:46:11 by ttavares          #+#    #+#              #
#    Updated: 2023/09/13 13:02:46 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= c++ -Wall -Wextra -Werror
RM	= rm -f

SRC = megaphone.cpp
NAME = megaphone

all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean

