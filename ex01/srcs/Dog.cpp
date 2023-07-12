/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:14:44 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:14:46 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type): Animal(type) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

