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
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int main(void) {

	// 42 TESTS
	std::cout << "---- 42 TESTS ----" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; i->makeSound(); //will output the cat sound! j->makeSound();
	meta->makeSound();

	// ANIMAL
	std::cout << std::endl << "---- ANIMAL ----" << std::endl;
	const Animal* animal = new Animal();
	std::cout << "Type: " << animal->getType() << std::endl;
	std::cout << "Sound: ";
	animal->makeSound();

	// CAT
	std::cout << std::endl << "---- CAT ----" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "Type: " << cat->getType() << std::endl;
	std::cout << "Sound: ";
	cat->makeSound();

	// DOG
	std::cout << std::endl << "---- DOG ----" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "Type: " << dog->getType() << std::endl;
	std::cout << "Sound: ";
	dog->makeSound();

	// WRONG ANIMAL
	std::cout << std::endl << "---- WRONG ANIMAL ----" << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "Type: " << wrongCat->getType() << std::endl;
	std::cout << "Sound: ";
	wrongCat->makeSound();

	// DELETE
	std::cout << std::endl << "---- DELETE ----" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete animal;
	delete cat;
	delete dog;
	delete wrongCat;

	return 0;
}
