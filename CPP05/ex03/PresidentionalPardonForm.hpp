/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentionalPardonForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:30:45 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/18 11:45:40 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIONALPARDONFORM_HPP
# define PRESIDENTIONALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentionalPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentionalPardonForm();
		PresidentionalPardonForm(std::string _target);
		~PresidentionalPardonForm();
		PresidentionalPardonForm(const PresidentionalPardonForm& cpy );
		PresidentionalPardonForm &operator=(const PresidentionalPardonForm& cpy);

		virtual void typeexecute(void) const;
};
#endif
