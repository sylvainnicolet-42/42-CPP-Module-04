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

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "Brain.class.hpp"

int main(void) {

	// 42 TESTS
	std::cout << "---- 42 TESTS ----" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;	//should not create a leak
	delete i;

	// CREATE ARRAY OF 10 ANIMALS
	std::cout << std::endl << "---- ARRAY OF 10 ANIMALS ----" << std::endl;
	Animal* animals[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	// DELETE ARRAY OF 10 ANIMALS
	std::cout << std::endl << "---- DELETE ARRAY OF 10 ANIMALS ----" << std::endl;
	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}

	// BRAIN
	std::cout << std::endl << "---- BRAIN ----" << std::endl;
	Brain* brain = new Brain();
	brain->setIdea(0, "Et si je créais une nouvelle idée?");
	std::cout << "Idea 0: " << brain->getIdea(0) << std::endl;
	delete brain;

	// CAT
	std::cout << std::endl << "---- CAT ----" << std::endl;
	Animal* cat = new Cat();
	cat->getBrain()->setIdea(0, "J'ai envie de ronronner...");
	std::cout << "Idea 0: " << cat->getBrain()->getIdea(0) << std::endl;
	delete cat;

	// DOG
	std::cout << std::endl << "---- DOG ----" << std::endl;
	Animal* dog = new Dog();
	dog->getBrain()->setIdea(0, "J'ai envie de jouer avec un os...");
	std::cout << "Idea 0: " << dog->getBrain()->getIdea(0) << std::endl;
	delete dog;

	// COPY
	std::cout << std::endl << "---- COPY ----" << std::endl;
	Cat* catOrigal = new Cat();
	catOrigal->getBrain()->setIdea(0, "J'ai envie de ronronner...");
	std::cout << "Idea 0: " << catOrigal->getBrain()->getIdea(0) << std::endl;
	Cat* catCopy = new Cat(*catOrigal);
	std::cout << "Idea 0: " << catCopy->getBrain()->getIdea(0) << std::endl;
	delete catOrigal;
	delete catCopy;

	return 0;
}
