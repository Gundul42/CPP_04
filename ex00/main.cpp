/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:17:23 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 12:58:27 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*qm = new Animal();
	Animal	*a = new Cat();
	Animal	*b = new Dog();

	std::cout << qm->getType() << " makes " << qm->makeSound() << std::endl;
	std::cout << a->getType() << " makes " << a->makeSound() << std::endl;
	std::cout << b->getType() << " makes " << b->makeSound() << std::endl;

	delete a;
	delete b;
	delete qm;
	return (0);
}
