/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 06:03:11 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/05 05:55:16 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H
#include "Contact.class.hpp"
#include <vector>

class PhoneBook
{
private:

	std::vector <Contact> phonebook;
	
public:
	PhoneBook(void);
	//Copy constructor
	~PhoneBook(void);
	//Copy assignment operator

	std::vector <Contact>& get_contacts();

	void add();
	void search();
	std::string getInput(const std::string &prompt);
	std::string formatInput(const std::string &prompt);

};

#endif