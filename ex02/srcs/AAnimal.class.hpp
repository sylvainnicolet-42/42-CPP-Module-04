/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:14:11 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:14:12 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

# include <iostream>
# include "Brain.class.hpp"

class AAnimal {
	public:
		AAnimal &operator=(const AAnimal &rhs);	// Assignment operator
		virtual ~AAnimal();	// Destructor
		virtual std::string getType() const = 0;
		virtual void makeSound() const = 0;
		virtual Brain *getBrain() const = 0;
};

#endif