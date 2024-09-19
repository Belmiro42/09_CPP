/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 04:37:14 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/05 06:23:45 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(void)
{
	//std::cout << "Constructed Contact\n";
}
Contact::~Contact(void)
{
	//std::cout << "Deconstructed Contact\n";
}
void			Contact::setfname(std::string fname)
{
	this->fname = fname;
}
void			Contact::setlname(std::string lname)
{
	this->lname = lname;

}
void			Contact::setnname(std::string nname)
{
	this->nname = nname;

}
void			Contact::setpnumb(std::string pnumb)
{
	this->pnumb = pnumb;

}
void			Contact::setdsecr(std::string dsecr)
{
	this->dsecr = dsecr;

}
std::string		Contact::getfname(void)
{
	return (fname);
}
std::string		Contact::getlname(void)
{
	return (lname);
}
std::string		Contact::getnname(void)
{
	return (nname);
}
std::string		Contact::getpnumb(void)
{
	return (pnumb);
}
std::string		Contact::getdsecr(void)
{
	return (dsecr);
}