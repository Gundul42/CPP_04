/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:22:26 by graja             #+#    #+#             */
/*   Updated: 2022/02/20 18:19:33 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int	main(void)
{
	AMateria*	mimi = new Ice;
	AMateria*	momo = new Cure;
	Character	john("Kuemmel");
	Character	lilly("Lilly");

	std::cout << std::endl << john.getName() << " is his name" << std::endl;
	john.equip(mimi);
	john.equip(momo);
	john.use(0, john);
	john.use(1, lilly);
	john.unequip(0);
	john.use(0, john);
	john.use(1, lilly);
	delete mimi;
	delete momo;
	return (0);
}
