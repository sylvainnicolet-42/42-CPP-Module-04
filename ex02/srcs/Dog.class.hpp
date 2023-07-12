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

#include "AAnimal.class.hpp"

class Dog : public AAnimal {
	public:
		Dog();							// Default constructor
		Dog(const Dog &src);			// Copy constructor
		~Dog();							// Destructor
		Dog &operator=(const Dog &rhs);	// Assignment operator

		Dog(std::string type);

		void 		makeSound() const;
		Brain 		*getBrain() const;
		std::string getType() const;
	protected:
		Brain *_brain;
		std::string _type;
};

#endif
