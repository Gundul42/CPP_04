/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:22:26 by graja             #+#    #+#             */
/*   Updated: 2022/02/21 18:35:41 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	if (tmp)
		me->equip(tmp);
	tmp = src->createMateria("cure");
	if (tmp)
		me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	tmp = src->createMateria("cure");
	if (tmp);
		bob->equip(tmp);
	tmp = src->createMateria("ice");
	if (tmp);
		bob->equip(tmp);
	tmp = src->createMateria("cure");
	if (tmp);
		bob->equip(tmp);
	delete bob;
	delete me;
	delete src;
	return 0;
}
