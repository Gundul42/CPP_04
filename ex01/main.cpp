/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:17:23 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 17:50:31 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal	*qm = new Animal();
	const Animal	*a = new Cat();
	const Animal	*b = new Dog();
	Animal			*c = new Cat();

	std::cout << qm->getType() << " makes " << qm->makeSound() << std::endl;
	std::cout << a->getType() << " makes " << a->makeSound() << std::endl;
	std::cout << b->getType() << " makes " << b->makeSound() << std::endl;
	std::cout << c->getType() <<  " makes " << c->makeSound() << std::endl;
	*c = *a;
	std::cout << c->getType() <<  " makes " << c->makeSound() << std::endl;

	delete a;
	delete b;
	delete c;
	delete qm;
	return (0);
}
