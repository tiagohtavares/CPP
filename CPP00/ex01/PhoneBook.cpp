/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:35:23 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/18 15:25:31 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::init()
{
	this->index = 0;
	this->maxindex = 0;
}
void	PhoneBook::hello()
{
	std::cout << "|Welcome to this crappy PhoneBook|"<<std::endl;
	std::cout << "|              1-ADD             |"<<std::endl;
	std::cout << "|              2-SEARCH          |"<<std::endl;
	std::cout << "|              3-EXIT            |"<<std::endl;
}

std::string	PhoneBook::input()
{
	std::string line;
	while(line.empty())
	{
		std::cout << ">";
		if(!getline(std::cin, line))
			exit(0);
		if(line.empty() == true)
			std::cout << "Cannot be empty!" << std::endl;
	}
	return (line);
}

int	PhoneBook::IsNum(std::string line)
{
	for(size_t i = 0;i < line.length(); i++)
	{
		if(!isdigit(line[i]))
			return 0;
	}
	return 1;
}

std::string	PhoneBook::InputNumber()
{
	std::string line;
	int number;
	int	isnumber = 0;
	while(line.empty())
	{
		while(isnumber == 0)
		{
		std::cout << ">";
		if(!getline(std::cin, line))
			exit(0);
		if(line.empty() == true)
			std::cout << "Cannot be empty!" << std::endl;
		isnumber = PhoneBook::IsNum(line);
		if(isnumber == 0)
		{
			std::cout << "Not a number!" << std::endl;
			std::cout << "Phone Number" << std::endl;
		}
		}
	}
	number = atoi(line.c_str());
	return (line);
}

void	PhoneBook::add()
{
	int	phonenumber;

	contacts[index].UpdateIndex(this->index);
	std::cout << "New contact to add!"<<std::endl;
	std::string line;

	std::cout << "First name"<<std::endl;
	line = PhoneBook::input();
	contacts[index].UpdateFirstName(line);

	std::cout << "Last name"<<std::endl;
	line = PhoneBook::input();
	contacts[index].UpdateLastName(line);

	std::cout << "Phone Number"<<std::endl;
	line = PhoneBook::InputNumber();
	phonenumber = atoi(line.c_str());
	contacts[index].UpdatePhoneNumber(phonenumber);

	std::cout << "Nickname"<<std::endl;
	line = PhoneBook::input();
	contacts[index].UpdateNickname(line);

	std::cout << "DarkestSecret"<<std::endl;
	line = PhoneBook::input();
	contacts[index].UpdateDarkestSecret(line);

	std::cout << "Done!"<<std::endl;
	this->index++;
	if (this->index > this->maxindex)
		this->maxindex = this->index;
	if(this->index > 7)
		this->index = 0;
}

void	PhoneBook::DisplaySearch(int i)
{
	std::cout << "!---Displaying---!" << std::endl;
	int	temp;
	std::string str;
	str = contacts[i].GetFirstName();
	std::cout << "FirstName: ";
	std::cout << str<<std::endl;
	str = contacts[i].GetLastName();
	std::cout << "LastName: ";
	std::cout << str<<std::endl;
	str = contacts[i].GetNickname();
	std::cout << "Nickname: ";
	std::cout << str<<std::endl;
	temp = contacts[i].GetPhoneNumber();
	std::cout << "Phonenumber: ";
	std::cout << temp<<std::endl;
	str = contacts[i].GetDarkestSecret();
	std::cout << "DarkestSecret: ";
	std::cout << str<<std::endl;
	std::cout << "!---Displaying---!" << std::endl;
}

void	PhoneBook::display()
{
	int	i = 0;
	int	ind;
	int	search;
	std::string line;
	while (i < this->maxindex)
	{
		ind = contacts[i].GetIndex();
		std::cout << ind;
		std::cout << "|";
		std::string str;
		str = contacts[i].GetFirstName();
		std::cout << str;
		std::cout << "|";
		str = contacts[i].GetLastName();
		std::cout << str;
		std::cout << "|";
		str = contacts[i].GetNickname();
		std::cout << str<<std::endl;
		i++;
	}
	std::cout << "Wich contact do you want to search?"<<std::endl;
	i = 0;
	line = PhoneBook::input();
	search = atoi(line.c_str());
	while (i < this->maxindex)
	{
		if(search >=0 && search < this->maxindex)
			PhoneBook::DisplaySearch(i);
		i++;
	}
}
