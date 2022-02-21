/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:22:26 by graja             #+#    #+#             */
/*   Updated: 2022/02/21 11:36:08 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int	main(void)
{
	AMateria*	mimi = new Ice;
	AMateria*	momo = new Cure;
	Character	john("John");
	Character	lilly("Lilly");
	Character	cpy("Copy");

	john.equip(mimi);
	john.equip(momo);
	john.equip(momo);
	john.equip(mimi);
	john.equip(mimi);
	cpy = john;
	john.use(0, john);
	john.use(1, lilly);
	lilly.use(0, john);
	cpy.use(2, lilly);
	john.unequip(1);
	john.use(0, john);
	john.use(1, lilly);
	john.use(2, lilly);
	john.use(3, lilly);
	delete mimi;
	delete momo;
	return (0);
}
