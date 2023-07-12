/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:15:07 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:15:09 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();									// Default constructor
		WrongAnimal(const WrongAnimal &src);			// Copy constructor
		~WrongAnimal();									// Destructor
		WrongAnimal &operator=(const WrongAnimal &rhs);	// Assignment operator

		WrongAnimal(std::string type);

		std::string getType() const;
		void makeSound() const;
	protected:
		std::string _type;
};

#endif