/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:02:43 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 12:02:44 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice(): AMateria("ice") {
//	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &src) {
//	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice() {
//	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs) {
//	std::cout << "Ice assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

AMateria*	Ice::clone() const {
	return new Ice(*this);
}

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
