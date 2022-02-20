/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:33:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/20 16:57:51 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//Constructors

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &wen) : AMateria(wen)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = wen;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice &right)
{
	std::cout << "Ice operator overload =" << std::endl;
	this->_type = right._type;
	return (*this);
}

Ice*	Ice::clone(void) const
{
	Ice*	cpy = new Ice();

	std::cout << "Ice cloning" << std::endl;
	*cpy = *this;
	return (cpy);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "*shoots an ice bolt at " << target.getName() << std::endl;
}
