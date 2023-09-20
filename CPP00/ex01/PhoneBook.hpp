/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:45:13 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/18 15:20:00 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include <cstdlib>
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
};

#endif
