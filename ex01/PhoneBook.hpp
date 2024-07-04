/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:48:40 by jofilipe          #+#    #+#             */
/*   Updated: 2024/06/26 15:22:39 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "header.hpp"
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	phoneBook[7];
		int		contactCount;
		int		index;

	public:
		PhoneBook(): contactCount (0), index (0) {}
		void	getContact();
		void	addContact(Contact &newContact);
};

#endif //CPP00_PHONEBOOK_H
