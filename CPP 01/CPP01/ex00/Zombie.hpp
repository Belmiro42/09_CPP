/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 05:15:25 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/06 06:22:18 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:

		std::string _name;


		//TODO: OTHER TWO

	public:

		Zombie(void);
		~Zombie(void);

		void 	announce(void);
		void 	randomChump(std::string name);
		void	setName(std::string name);
		Zombie* newZombie(std::string name);
};