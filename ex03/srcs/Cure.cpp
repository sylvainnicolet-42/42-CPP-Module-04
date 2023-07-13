/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:02:53 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 12:02:54 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure(): AMateria("cure") {
//	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &src) {
//	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure() {
//	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs) {
//	std::cout << "Cure assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

AMateria*	Cure::clone() const {
	return new Cure(*this);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
