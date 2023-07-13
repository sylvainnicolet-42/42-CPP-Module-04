/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:48:32 by synicole          #+#    #+#             */
/*   Updated: 2023/07/13 09:48:34 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include <iostream>
# include "IMateriaSource.class.hpp"

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();									// Default constructor
		MateriaSource(const MateriaSource &src);			// Copy constructor
		virtual ~MateriaSource();							// Destructor
		MateriaSource &operator=(const MateriaSource &rhs);	// Assignment operator

		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(std::string const & type);
};

#endif