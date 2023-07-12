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

	std::cout << std::endl;

	// BRAIN
	std::cout << "---- BRAIN ----" << std::endl;
	Brain* brain = new Brain();
	brain->setIdea(0, "Et si je créais une nouvelle idée?");
	std::cout << "Idea 0: " << brain->getIdea(0) << std::endl;
	delete brain;


	return 0;
}
