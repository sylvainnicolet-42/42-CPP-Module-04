/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:59:25 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 10:59:26 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(): _name("Bob") {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string& name) : _name(name) {
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &src): _name(src._name) {
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = src._inventory[i]->clone();
	}
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(const Character &rhs) {
	std::cout << "Character assignment operator called" << std::endl;
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

std::string const &	Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}