/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:14:26 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:14:28 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type): Animal(type) {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miaouuu!" << std::endl;
}
