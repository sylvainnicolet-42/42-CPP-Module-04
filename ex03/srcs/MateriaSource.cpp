/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:47:35 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 11:47:38 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
		this->_materia[i] = src._materia[i];
	}
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	std::cout << "MateriaSource assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
		this->_materia[i] = rhs._materia[i];
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return 0;
}