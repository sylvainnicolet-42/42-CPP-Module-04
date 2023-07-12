/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:15:24 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:15:25 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();									// Default constructor
	WrongCat(const WrongCat &src);				// Copy constructor
	~WrongCat();								// Destructor
	WrongCat &operator=(const WrongCat &rhs);	// Assignment operator

	WrongCat(std::string type);

	void makeSound() const;
};

#endif