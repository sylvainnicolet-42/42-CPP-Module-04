/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:15:02 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:15:03 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal can't make sound" << std::endl;
}
