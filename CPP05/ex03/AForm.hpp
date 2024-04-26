/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:59:20 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/15 14:14:27 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _reqGradeSign;
		const int _reqGradeExec;
	public:
		AForm();
		AForm(std::string name, int reqGradeExec, int reqGradeSign);
		virtual ~AForm();
		AForm(const AForm& cpy );
		AForm &operator=(const AForm& cpy);

		std::string getName() const;
		bool getSigned() const;
		int getReqGradeSign() const;
		int getReqGradeExec() const;

		void beSigned(Bureaucrat& bureau);

		void execute(const Bureaucrat& executor) const;
		virtual void typeexecute(void) const = 0;

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

	class FormUnsignedException : public std::exception
	{
		public:
			virtual char const *what() const throw();
	};

	class BureaucratGradeToLowException : public std::exception
	{
		public:
			virtual char const *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, AForm& src);

#endif
