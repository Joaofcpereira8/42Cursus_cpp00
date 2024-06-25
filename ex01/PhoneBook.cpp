/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:54:28 by jofilipe          #+#    #+#             */
/*   Updated: 2024/06/25 17:28:49 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "iostream"

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << "Too many arguments! Use ADD, SEARCH or EXIT!" << std::endl;
		return (-1);
	}
	else
	{
		std::string	function = argv[1];
		if (function.compare("ADD"))
		{
			
		}

	}
}
