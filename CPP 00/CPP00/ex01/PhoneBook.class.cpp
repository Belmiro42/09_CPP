/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 04:33:18 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/05 06:33:56 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

//Copy constructor
//Copy assignment operator
PhoneBook::PhoneBook(void)
{
	//std::cout << "Phonebook Constructed\n";
}
PhoneBook::~PhoneBook(void)
{
	//std::cout << "Phonebook Deconstructed\n";
}

std::vector <Contact>& PhoneBook::get_contacts()
{
	return (phonebook);
}
void PhoneBook::add()
{
	Contact new_contact;
	std::vector<Contact>& contacts = get_contacts();

	new_contact.setfname(getInput("What is the first name?:     "));
	new_contact.setnname(getInput("What is the nickname?:       "));
	new_contact.setlname(getInput("What is the last name?:      "));
	new_contact.setpnumb(getInput("What is the phone number?:   "));
	new_contact.setdsecr(getInput("What is the contact secret?: "));

	if (contacts.size() == 8)
		contacts.pop_back();
	contacts.push_back(new_contact);
	//std::cout << contacts.size() << std::endl;
}
void PhoneBook::search()
{
	std::vector <Contact>& 	contacts = get_contacts();
	std::string				tmp;
	std::size_t 			index;
	
	std::cout << "┌────────────┬────────────┬────────────┬────────────┐\n";
	std::cout << "│    INDEX   │ FIRST NAME │ LAST NAME  │ NICK NAME  │\n";
	std::cout << "├────────────┼────────────┼────────────┼────────────┤\n";
	for (std::size_t index = 0; index <contacts.size(); ++index)
	{
		std::cout << "│";
		std::cout << formatInput(std::to_string(index));
		std::cout << "│";
		std::cout << formatInput(contacts.at(index).getfname());
		std::cout << "│";
		std::cout << formatInput(contacts.at(index).getlname());
		std::cout << "│";
		std::cout << formatInput(contacts.at(index).getnname());
		std::cout << "│";
		std::cout << "\n";
	}
	std::cout << "└────────────┴────────────┴────────────┴────────────┘\n";
	index = -1;
	do{
		if (contacts.size() == 0)
			break;
		std::cout << "What index?:                 ";
		std::getline(std::cin, tmp);
		try { index = std::stoi(tmp); }
		catch (...){continue;}
	} while (index < 0 || index > contacts.size() -1);
	
	if (contacts.size() != 0)
	{
		std::cout << contacts.at(index).getfname() << std::endl;
		std::cout << contacts.at(index).getlname() << std::endl;
		std::cout << contacts.at(index).getnname() << std::endl;
		std::cout << contacts.at(index).getpnumb() << std::endl;
		std::cout << contacts.at(index).getdsecr() << std::endl;
	}
}
std::string PhoneBook::getInput(const std::string &prompt)
{
	std::string input;

	do
	{
		std::cout << prompt;
		std::getline(std::cin, input);
	} while (input.empty());
	
	return (input);
}

std::string PhoneBook::formatInput(const std::string &input_original)
{
	std::string input = input_original;
	
	if (input.size() < 10)
	{
		while (input.size() != 10)
			input.insert(0, " ");
	}
	if (input.size() > 10)
	{
		input.erase(9, input.size() - 9);
		input.append(".");
	}
	input.insert(0, " ");
	input.append(" ");
	return (input);
}