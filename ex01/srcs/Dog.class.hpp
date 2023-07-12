/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:14:50 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:14:51 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.class.hpp"

class Dog : public Animal {
public:
	Dog();							// Default constructor
	Dog(const Dog &src);			// Copy constructor
	virtual ~Dog();					// Destructor
	Dog &operator=(const Dog &rhs);	// Assignment operator

	Dog(std::string type);

	virtual void makeSound() const;
};

#endif
