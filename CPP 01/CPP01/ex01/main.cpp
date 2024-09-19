/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 05:24:44 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/06 06:34:55 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie class_instance;
	Zombie* theHorde;

	theHorde = class_instance.zombieHorde(4, "TheHorde");
	for (int iterator = 0; iterator < 4; iterator ++)
		theHorde[iterator].announce();
	
	delete[] theHorde;
}