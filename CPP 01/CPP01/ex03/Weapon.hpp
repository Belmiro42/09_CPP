/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 06:54:14 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/10 17:15:04 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:

		std::string type;
	
	public:

		Weapon();
		Weapon(std::string weapon);
		~Weapon();

		std::string getType() const;
		void setType(const std::string& newType);
};

#endif