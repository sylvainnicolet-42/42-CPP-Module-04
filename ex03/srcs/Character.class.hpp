/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:48:40 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 09:48:42 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include "ICharacter.class.hpp"

class Character: public ICharacter {
	public:
		Character();									// Default constructor
		Character(const Character &src);				// Copy constructor
		virtual ~Character();							// Destructor
		Character &operator=(const Character &rhs);		// Assignment operator

		Character(std::string name);					// Constructor

		virtual std::string const &	getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};

#endif