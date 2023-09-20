/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:49:36 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/13 13:11:10 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			for(int j = 0; argv[i][j]; j++)
				std::cout << (char) toupper(argv[i][j]);
			if (i < argc && i != argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
