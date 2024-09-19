/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 05:15:25 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/06 06:25:01 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:

		std::string _name;



	public:

		//TODO: OTHER TWO
		Zombie(void);
		~Zombie(void);

		void 	announce(void);
		void 	randomChump(std::string name);
		Zombie* newZombie(std::string name);
		Zombie* zombieHorde(int N, std::string name);
};