/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:35:12 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 11:35:13 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria() : _type("default") {
//	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
//	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src) {
//	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria() {
//	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
//	std::cout << "AMateria assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "* Does nothing *" << std::endl;
}
