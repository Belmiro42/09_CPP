/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 04:51:59 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/05 04:58:53 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int main()
{
	PhoneBook		contacts;
	std::string		input;
	
	while (true)
	{
		std::cout << "(ADD SEARCH EXIT)\n\t:";
		std::getline(std::cin, input);
		if (input == "ADD")
			contacts.add();
		if (input == "SEARCH")
			contacts.search();
		if (input == "EXIT")
			break;		
	}
}