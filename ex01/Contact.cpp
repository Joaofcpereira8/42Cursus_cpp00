/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:24:19 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/05 12:30:48 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	Contact::setFirstName(std::string str) {
	firstName = str;
}

void	Contact::setLastName(std::string str) {
	lastName = str;
}

void	Contact::setNickName(std::string str) {
	nickName = str;
}

void	Contact::setPhoneNum(std::string str) {
	phoneNumber = str;
}

void	Contact::setDarkSec(std::string str) {
	darkestSecret = str;
}


std::string Contact::getFirstName() {
	return (firstName);
}

std::string Contact::getLastName() {
	return (lastName);
}

std::string Contact::getNickName() {
	return (nickName);
}

std::string Contact::getDarkSecret() {
	return (darkestSecret);
}

std::string Contact::getPhoneNum() {
	return (phoneNumber);
}
