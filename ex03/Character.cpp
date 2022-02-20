/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:36:45 by graja             #+#    #+#             */
/*   Updated: 2022/02/20 18:20:30 by graja            ###   ########.fr       */
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

//Methods and implementation of ICharacter interface
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
	std::cout << m->getType() << " was equipped in slot #" << this->_idx << std::endl;
}

void	Character::unequip(int idx)
{
	int	i;

	i = idx;
	if (i < 0 || i > this->_idx)
		return ;
	while (i < this->_idx)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		i++;
	}
	this->_inventory[i] = NULL;
	this->_idx--;
	std::cout << "Slot " << idx << " was unequipped" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > this->_idx)
		return ;
	this->_inventory[idx]->use(target);
}