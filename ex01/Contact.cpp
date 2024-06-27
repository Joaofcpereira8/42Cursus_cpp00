/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:24:19 by jofilipe          #+#    #+#             */
/*   Updated: 2024/06/26 16:28:14 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	getContactInfo(int num, char fName, char lName, char nick, char sec)
{
	Contact		contact;
	char		input;
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
