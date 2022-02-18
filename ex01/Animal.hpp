/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:57:04 by graja             #+#    #+#             */
/*   Updated: 2022/02/18 19:40:28 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(const Animal &cpy);
		virtual ~Animal(void);

		virtual Animal&	operator=(const Animal &ovr);

		std::string	getType(void) const;
		virtual std::string	makeSound(void) const;
		virtual std::string	getIdea(int n);
		virtual void			setIdea(int n, std::string mem);
};

#endif
