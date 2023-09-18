/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:35:19 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/18 14:57:20 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

int Contact::GetIndex()
{
	return(this->index);
}

int Contact::GetPhoneNumber()
{
	return(this->PhoneNumber);
}


std::string Contact::GetFirstName()
{
	return(this->FirstName);
}

std::string Contact::GetLastName()
{
	return(this->LastName);
}

std::string Contact::GetNickname()
{
	return(this->nickname);
}

std::string Contact::GetDarkestSecret()
{
	return(this->DarkestSecret);
}

void Contact::UpdateIndex(int i)
{
	this->index = i;
}

void Contact::UpdatePhoneNumber(int i)
{
	this->PhoneNumber = i;
}

void Contact::UpdateFirstName(std::string str)
{
	this->FirstName = str;
}

void Contact::UpdateDarkestSecret(std::string str)
{
	this->DarkestSecret = str;
}

void Contact::UpdateLastName(std::string str)
{
	this->LastName = str;
}

void Contact::UpdateNickname(std::string str)
{
	this->nickname = str;
}
