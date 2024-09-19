/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:10:49 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/10 17:11:36 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::~HumanA()
{

}
void HumanA::attack()
{	
	std::cout << _name  << " attacks with their " << _holding.getType() << std::endl;
}
void HumanA::setWeapon(Weapon newWeapon)
{
	_holding = newWeapon;
}
void HumanA::setName(std::string name)
{
	_name = name;
}
