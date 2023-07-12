/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:18:27 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 22:18:28 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdea(i);
	std::cout << "Brain assignation operator called" << std::endl;
	return *this;
}

std::string Brain::getIdea(int i) const {
	return this->_ideas[i];
}

void Brain::setIdea(int i, const std::string& idea) {
	std::cout << "Add new idea: [" << idea << "] at index " << i << std::endl;
	this->_ideas[i] = idea;
}