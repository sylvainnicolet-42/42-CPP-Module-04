/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:14:11 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:14:12 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# include "Brain.class.hpp"

class Animal {
	public:
		Animal();								// Default constructor
		Animal(const Animal &src);				// Copy constructor
		virtual ~Animal();						// Destructor
		Animal &operator=(const Animal &rhs);	// Assignment operator

		Animal(std::string type);

		virtual std::string getType() const;
		virtual void makeSound() const;
		virtual Brain *getBrain() const = 0;
	protected:
		std::string _type;
};

#endif