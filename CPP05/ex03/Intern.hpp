/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:18:28 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/22 12:26:22 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include <iostream>
#include "AForm.hpp"
#include "PresidentionalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& cpy );
		Intern &operator=(const Intern& cpy);

		AForm* makeForm(std::string name, std::string target);
		AForm* makePresidentionalPardonForm(std::string target);
		AForm* makeRobotomyRequestForm(std::string target);
		AForm* makeShrubberyCreationForm(std::string target);
	class FormNotFoundException : public std::exception
	{
		public:
			virtual char const *what() const throw();
	};
};

#endif
