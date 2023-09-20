/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:07:38 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/20 11:16:23 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <iomanip>

class Contact
{
	private :
		int	index;
		int	PhoneNumber;
		std::string DarkestSecret;
		std::string FirstName;
		std::string LastName;
		std::string nickname;
	public :
		Contact(void);
		~Contact(void);
		int GetIndex() ;
		int GetPhoneNumber();
		std::string GetDarkestSecret();
		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickname();
		void	UpdateIndex(int);
		void	UpdateFirstName(std::string);
		void	UpdateLastName(std::string);
		void	UpdateNickname(std::string);
		void	UpdatePhoneNumber(int);
		void	UpdateDarkestSecret(std::string);
};

#endif
