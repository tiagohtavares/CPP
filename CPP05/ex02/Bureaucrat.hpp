/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:37 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/15 14:15:14 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& cpy );
		Bureaucrat &operator=(const Bureaucrat& cpy);

		std::string getName();
		int getGrade();
		void setGrade(int grade);
		void incrementGrade();
		void decrementGrade();
		void signForm(Form& form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual char const *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual char const *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& src);

#endif
