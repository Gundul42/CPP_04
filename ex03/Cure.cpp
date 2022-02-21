/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:33:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/21 16:23:31 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//Constructors

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &wen) : AMateria(wen)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = wen;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure &right)
{
	std::cout << "Cure operator overload =" << std::endl;
	this->_type = right._type;
	return (*this);
}

Cure*	Cure::clone(void) const
{
	Cure*	bck = new Cure;

	*bck = *this;
	std::cout << "Cure cloning" << std::endl;
	return (bck);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "*heals " << target.getName() <<"'s wounds" << std::endl;
}
