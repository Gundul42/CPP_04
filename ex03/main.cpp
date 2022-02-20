/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:22:26 by graja             #+#    #+#             */
/*   Updated: 2022/02/20 13:52:37 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int	main(void)
{
	Cure	lala;
	Cure	lolo;
	Ice	mimi;
	Ice	momo;
	Character	john;

	lolo = lala;
	momo = mimi;
	std::cout << std::endl << john.getName() << " is his name" << std::endl;
	john.equip(&mimi);
	john.equip(&lolo);
	john.equip(&lala);
	john.equip(&momo);
	john.equip(&mimi);
	return (0);
}
