# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:46:11 by ttavares          #+#    #+#              #
#    Updated: 2023/09/18 11:12:37 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= c++ -Wall -Wextra -Werror -std=c++98
RM	= rm -f

SRCS = PhoneBook.cpp Contact.cpp main.cpp
NAME = phonebook

all:	$(NAME)

$(NAME):
	$(CC) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean

