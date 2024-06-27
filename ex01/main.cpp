/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:23:40 by jofilipe          #+#    #+#             */
/*   Updated: 2024/06/26 16:31:18 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	Contact	contact;
	char	input;
	std::cout << "Please enter a command:";
	std::cin >> input;
	if (input.compare("ADD") == 0)
	{
		contact.getContactInfo();
		char		fName;
		char		lName;
		char		nick;
		char		sec;
		int			temp;

		std::cout << "Insert first name:" << std::endl;
		std::cin >> input;
		fName = input;

		std::cout << "Insert last name:" << std::endl;
		std::cin >> input;
		lName = input;

		std::cout << "Insert nickname:" << std::endl;
		std::cin >> input;
		nick = input;

		std::cout << "Insert number:" << std::endl;
		std::cin >> temp;
		num = temp;

		std::cout << "Insert the Darkest Secret:" << std::endl;
		std::cin >> input;
		sec = input;
	}
	else if (input.compare("SEARCH") == 0)
	{
		/* code */
	}
	else if (input.compare("EXIT") == 0)
		return(0);
}
