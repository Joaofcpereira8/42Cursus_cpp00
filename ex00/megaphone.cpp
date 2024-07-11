/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:37:03 by jofilipe          #+#    #+#             */
/*   Updated: 2024/05/17 18:56:57 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "ctype.h"

int main(int argc, char **argv)
{
	int	i = 1;
	int	j;

	if (argc != 1)
	{
		while (argc > i)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
					argv[i][j] = toupper(argv[i][j]);
				j++;
			}
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
