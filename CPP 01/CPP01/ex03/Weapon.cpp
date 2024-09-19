/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:28:51 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/10 17:14:06 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	setType("Bare Hands");
}

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string& newType)
{
	type = newType;
}