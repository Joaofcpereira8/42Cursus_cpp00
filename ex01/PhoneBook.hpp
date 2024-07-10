/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:48:40 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/05 13:00:12 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "header.hpp"

class PhoneBook
{
	private:
		Contact			phoneBook[8];
		static int		contactCount;
		static int		index;

	public:
	//METHODS
		void		getContact();
		int			contactIndex();
		void		getContactInfo();
		void		defineContact(std::string info, std::string type);

		void		printTable();
		void		contactDetails(int i);

		std::string	nickVerif(std::string nickName);
		int			numberVerif(std::string phoneNum);
		std::string	lastNameVerif(std::string lastName);
		std::string	darkSecVerif(std::string darkSecret);
		std::string	firstNameVerif(std::string firstName);
		int			inspectPhoneNum(std::string phoneNum);

		std::string	adjust(std::string info);
};

#endif //CPP00_PHONEBOOK_H
