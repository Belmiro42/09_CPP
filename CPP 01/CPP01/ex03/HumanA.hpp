/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:10:47 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/10 17:11:16 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:

		std::string _name;
		Weapon _holding;
		
	public:
		
		  HumanA(const std::string& name, Weapon& weapon) : _name(name), _holding(weapon) {}
		~HumanA();
		void setWeapon(Weapon newWeapon);
		void setName(std::string name);
		void attack();

};