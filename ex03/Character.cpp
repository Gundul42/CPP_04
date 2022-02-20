/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:36:45 by graja             #+#    #+#             */
/*   Updated: 2022/02/20 15:06:11 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Constructors
Character::Character(void) : _name("Default"), _idx(-1)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
}

Character::Character(std::string const name) : _name(name), _idx(-1)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
}

Character::Character(Character const &cpy)
{
	*this = cpy;
}

//Destructor
Character::~Character(void)
{
}

//Operator overload
Character&	Character::operator=(Character const &right)
{
	*this = right;
	return (*this);
}

//Methods
std::string const &Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_idx > 2)
	{
		std::cout << this->getName() << "'s Inventory is full" << std::endl;
		return ;
	}
	this->_idx++;
	this->_inventory[this->_idx] = m;
	std::cout << m->getType() << " was equipped" << std::endl;
}

void	Character::unequip(int idx)
{
	std::cout << idx << " was unequipped" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	std::cout << idx << " used by " << target.getName() << std::endl;
}
