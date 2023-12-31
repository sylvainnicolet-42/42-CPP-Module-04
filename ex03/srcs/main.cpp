/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:45:30 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 13:45:32 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.class.hpp"
#include "MateriaSource.class.hpp"
#include "ICharacter.class.hpp"
#include "Character.class.hpp"
#include "AMateria.class.hpp"
#include "Ice.class.hpp"
#include "Cure.class.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	// CREATE A MATERIASOURCE AND LEARN A MATERIA
	IMateriaSource* materiaSource = new MateriaSource();
	materiaSource->learnMateria(new Ice());

	// CREATE TWO CHARACTERS
	ICharacter* pikachu = new Character("Pikachu");
	ICharacter* raichu = new Character("Raichu");

	// CREATE TWO MATERIAS FROM THE MATERIASOURCE AND EQUIP THEM TO THE CHARACTER
	AMateria* materia;
	materia = materiaSource->createMateria("ice");
	pikachu->equip(materia);
	materia = materiaSource->createMateria("ice");
	pikachu->equip(materia);

	// USE THE MATERIAS
	pikachu->use(0, *raichu);
	pikachu->use(1, *raichu);
	pikachu->use(2, *raichu);

	// UNEQUIP THE FIRST MATERIA AND USE IT AGAIN
	pikachu->unequip(0);
	pikachu->use(0, *raichu);

	delete raichu;
	delete pikachu;
	delete materiaSource;

	return 0;
}
