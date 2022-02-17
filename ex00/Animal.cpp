/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/17 18:21:17 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructors
Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	std::cout << std::endl;
	this->_type = "";
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	std::cout << std::endl;
	*this = cpy;
}

//Destructor
Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
	std::cout << std::endl;
}

//Operator overload
Animal&	Animal::operator=(const Animal &ovr)
{
	this->_type = ovr._type;
	std::cout << "Animal operator overload for =" << std::endl;
	std::cout << std::endl;
	return (*this);
}

//methods
std::string	Animal::getType(void)
{
	return (this->_type);
}

std::string	Animal::makeSound(void)
{
	std::cout << "MUUUUUH" << std::endl;
	std::cout << std::endl;
	return ("MUUUH");
}
