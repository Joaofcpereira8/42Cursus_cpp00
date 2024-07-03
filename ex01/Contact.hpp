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
		std::string	phoneNumber;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	darkestSecret;

	public:
		int		inspectPhoneNum();
		void	getContactInfo();
		int		firstNameVerif(Contact &contact);
		int		lastNameVerif(Contact &contact);
		int		darkSecVerif(Contact &contact);
		int		numberVerif(Contact &contact);
		int		nickVerif(Contact &contact);
};

#endif
