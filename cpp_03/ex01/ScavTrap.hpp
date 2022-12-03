/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:28:27 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/03 13:24:44 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

// SravTrap inherits from ClapTrap
// its constructor and destructor and attack will print a
// different message than the ones in ClapTrap

/*
** What is inheritance?
** Inheritance is a way to reuse code. It allows you to create a new class
** that reuses (inherits) all the properties and behaviors of an existing class.
** The class whose properties and behaviors are inherited is called the base class.
** The class that inherits the properties and behaviors of the base class is called
** the derived class.
** the derived class can add its own properties and behaviors in addition to the
** inherited ones.
** The derived class can also override the behavior of the base class.
** Here the syntax:
** class DerivedClassName : access BaseClassName {
** 	// body of the derived class
** }
** access can be public, protected or private
** access specifies the access level for the base class members in the derived class
*/

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & rhs );
		ScavTrap & operator=( ScavTrap const & rhs );
		~ScavTrap();
		void attack( std::string const & target );
		void guardGate();
};

#endif