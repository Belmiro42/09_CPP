/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 06:03:14 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/05 05:12:16 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H
#include <iostream>

class Contact
{
	private:
		std::string fname;
		std::string lname;
		std::string nname;
		std::string pnumb;
		std::string dsecr;
		

	public:

		//copyconstructor etc
		Contact(void);
		~Contact(void);
		void			setfname(std::string fname);
		void			setlname(std::string lname);
		void			setnname(std::string nname);
		void			setpnumb(std::string nname);
		void			setdsecr(std::string nname);
		std::string		getfname(void);
		std::string		getlname(void);
		std::string		getnname(void);
		std::string		getpnumb(void);
		std::string		getdsecr(void);
};

#endif