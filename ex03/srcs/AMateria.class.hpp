/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:38:45 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 09:38:47 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include "ICharacter.class.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria();									// Default constructor
		AMateria(AMateria const &src);				// Copy constructor
		virtual ~AMateria();						// Destructor
		AMateria &operator=(const AMateria &rhs);	// Assignment operator

		AMateria(std::string const & type);

		std::string const & getType() const;
		virtual			AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
	protected:
		std::string		_type;
};

#endif