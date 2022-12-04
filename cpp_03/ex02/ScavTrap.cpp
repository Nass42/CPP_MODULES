/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:09:53 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/04 17:09:19 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap Constructor Called" << std::endl;
	if (!this->_name.length()) {
		this->_name = "Default";
	}
}

ScavTrap::ScavTrap( ScavTrap const & rhs ) {
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = rhs;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
	std::cout << "ScavTrap Assignation Operator Called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode" << std::endl;
}
