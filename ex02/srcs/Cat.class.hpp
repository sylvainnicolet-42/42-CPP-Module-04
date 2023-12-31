/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:14:35 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:14:37 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "AAnimal.class.hpp"

class Cat : public AAnimal {
	public:
		Cat();							// Default constructor
		Cat(const Cat &src);			// Copy constructor
		~Cat();							// Destructor
		Cat &operator=(const Cat &rhs);	// Assignment operator

		Cat(std::string type);

		void 		makeSound() const;
		Brain 		*getBrain() const;
		std::string getType() const;
	private:
		Brain *_brain;
		std::string _type;

};

#endif