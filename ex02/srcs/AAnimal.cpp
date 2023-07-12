/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:14:11 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 21:14:12 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	(void)rhs;
	std::cout << "AAnimal assignation operator called" << std::endl;
	return *this;
}