/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:53:07 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 09:53:10 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"

class Cure: public AMateria {
	public:
		Cure();								// Default constructor
		Cure(const Cure &src);				// Copy constructor
		virtual ~Cure();					// Destructor
		Cure &operator=(const Cure &rhs);	// Assignment operator

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif