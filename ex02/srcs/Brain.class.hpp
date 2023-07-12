/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:18:32 by synicole          #+#    #+#             */
/*   Updated: 2023/07/12 22:18:33 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <iostream>

class Brain {
	public:
		Brain();							// Default constructor
		Brain(const Brain &src);			// Copy constructor
		~Brain();							// Destructor
		Brain &operator=(const Brain &rhs);	// Assignment operator

		std::string	getIdea(int i) const;
		void		setIdea(int i, const std::string& idea);
	private:
		std::string _ideas[100];
};

#endif