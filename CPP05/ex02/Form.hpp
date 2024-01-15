/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:59:20 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/15 14:14:27 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _reqGradeSign;
		const int _reqGradeExec;
	public:
		Form();
		Form(std::string name, int reqGradeExec, int reqGradeSign);
		~Form();
		Form(const Form& cpy );
		Form &operator=(const Form& cpy);

		std::string getName();
		bool getSigned();
		int getReqGradeSign();
		int getReqGradeExec();
		void beSigned(Bureaucrat& bureau);

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

std::ostream& operator<<(std::ostream& os, Form& src);

#endif
