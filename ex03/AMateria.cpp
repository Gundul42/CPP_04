/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:06:07 by graja             #+#    #+#             */
/*   Updated: 2022/02/20 17:58:20 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//Constructors
AMateria::AMateria(void) : _type("")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria constructor called with: " << type << std::endl;
	this->_type = type;
}

AMateria::AMateria(AMateria const &wen)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = wen;
}

//Destructor is virtual to be polymorph !
AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

//Operator overload
AMateria& AMateria::operator=(const AMateria &right)
{
	this->_type = right._type;
	std::cout << "AMateria operator overload =" << std::endl;
	return (*this);
}

//Methods
std::string const & AMateria::getType(void) const
{
	return (this->_type);
}
