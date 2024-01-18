/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:37 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/18 12:29:30 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include "AForm.hpp"

class AForm;

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
		int getGrade() const;
		void setGrade(int grade);
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm& AForm);
		void executeForm(const AForm& form);

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
