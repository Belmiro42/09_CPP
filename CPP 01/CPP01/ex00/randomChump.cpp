/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 05:19:15 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/06 05:36:12 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void 	Zombie::randomChump(std::string name)
{
	Zombie random;

	random._name = name;
	random.announce();
}
