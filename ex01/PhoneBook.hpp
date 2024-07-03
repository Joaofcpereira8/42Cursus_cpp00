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

class PhoneBook
{
	private:
		Contact	phoneBook[7];
		int		contactCount;
		int		index;

	public:
		void	getContact();
		void	addContact(Contact &newContact);
};

#endif //CPP00_PHONEBOOK_H
