/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 06:38:15 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/06 06:44:22 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string;

	string = "HI THIS IS BRAIN";

	std::string* stringPTR;

	stringPTR = &string;

	std::string& stringREF = string;

	std::cout << "The memory address of string is:    " << &string << std::endl;
	std::cout << "The memory address of stringPTR is: " << &stringPTR << std::endl;
	std::cout << "The memory address of stringREF is: " << &stringREF << std::endl;
	
	std::cout << "String value is:    " << string << std::endl;
	std::cout << "StringPTR value is: " << *stringPTR << std::endl;
	std::cout << "StringREF value is: " << stringREF << std::endl;


}