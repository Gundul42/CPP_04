/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:57:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 18:09:42 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Dog: public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(const Dog &cpy);
		virtual ~Dog(void);

		Dog&	operator=(const Dog &ovr);

		virtual std::string	makeSound(void) const;
};

#endif
