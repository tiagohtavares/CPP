/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:45:13 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/20 11:01:23 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private :
		Contact contacts[8];
		int index;
		int	maxindex;
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	hello(void);
		void	add();
		void	display();
		void	init();
		void	DisplaySearch(int	i);
		std::string input();
		std::string InputNumber();
		int	IsNum(std::string line);
		std::string FormatString(std::string str);
};

#endif
