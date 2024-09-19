/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:10:50 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/10 16:50:40 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon& newWeapon)
{
	setName(name);
	setWeapon(newWeapon);
}

HumanB::~HumanB()
{

}
void HumanB::attack()
{

}
void HumanB::setWeapon(Weapon newWeapon)
{
	_holding = newWeapon;
}
void HumanB::setName(std::string name)
{
	_name = name;
}