/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:37 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 14:14:10 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP
#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain& cpy );
		Brain &operator=(const Brain& cpy);
} ;

#endif
