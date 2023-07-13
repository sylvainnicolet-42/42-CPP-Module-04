/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:52:59 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 09:53:00 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"

class Ice: public AMateria {
	public:
		Ice();							// Default constructor
		Ice(const Ice &src);			// Copy constructor
		virtual ~Ice();					// Destructor
		Ice &operator=(const Ice &rhs);	// Assignment operator

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif