/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:10:50 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/10 16:50:58 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:

		std::string _name;
		Weapon _holding;
		
	public:
		
		HumanB(std::string name, Weapon& wielding);
		~HumanB();
		void setWeapon(Weapon newWeapon);
		void setName(std::string name);
		void attack();

};