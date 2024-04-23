# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 12:26:32 by ttavares          #+#    #+#              #
#    Updated: 2024/04/23 11:47:12 by ttavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM 			= rm -f

NAMES = main Bureaucrat AForm PresidentionalPardonForm ShrubberyCreationForm RobotomyRequestForm Intern
SRCS = $(NAMES:=.cpp)
OBJS = $(NAMES:=.o)
NAME = Bureaucrat

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME) reara_shrubbery

re:	fclean all clean
