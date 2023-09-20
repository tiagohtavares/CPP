#include "PhoneBook.hpp"
#include <string>

int	main(void)
{
	std::string	line;
	PhoneBook PhoneBook;
	PhoneBook.init();
	while(1)
	{
		PhoneBook.hello();
		std::cout << ">";
		if(!getline(std::cin, line))
			return (0);
		if(line.compare("EXIT") == 0)
			return (0);
		else if(line.compare("ADD") == 0)
		{
			PhoneBook.add();
		}
		else if(line.compare("SEARCH") == 0)
		{
			PhoneBook.display();
		}
		else
			std::cout << "Command not found"<<std::endl;
	}
	return (0);
}
