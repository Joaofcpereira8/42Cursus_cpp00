/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:38:38 by jofilipe          #+#    #+#             */
/*   Updated: 2024/06/26 16:22:03 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "header.hpp"

class	Contact
{
	private:
		int			phoneNumber;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	darkestSecret;

	public:
		void	getContactInfo(int num, char fName, char lName, char nick, char sec);

};

#endif
