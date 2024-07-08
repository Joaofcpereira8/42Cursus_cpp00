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
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	phoneBook[7];
		static int		contactCount;
		static int		index;

	public:
		void	getContact();
		void	addContact(Contact &newContact);
};

#endif //CPP00_PHONEBOOK_H
