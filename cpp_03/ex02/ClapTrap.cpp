/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:04:54 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/09 10:55:15 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(100), _energyPoints(100), _attackDamage(30) {
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(100), _energyPoints(100), _attackDamage(30) {
	std::cout << "ClapTrap Constructor Called" << std::endl;
	if (!this->_name.length()) {
		this->_name = "Default";
	}
}

ClapTrap::ClapTrap( ClapTrap const & rhs ) {
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = rhs;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	std::cout << "ClapTrap Assignation Operator Called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

void ClapTrap::attack( std::string const & target ) {
	if (!this->_energyPoints) {
		std::cout << "ClapTrap " << this->_name << " has no energy to attack " << target << std::endl;
		return ;
	} else if (!this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " has no health to attack " << target << std::endl;
		return ;
	} else if (!target.length()) {
		std::cout << "ClapTrap " << this->_name << " has no target to attack" << std::endl;
		return ;
	} else {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if ((int)amount <= 0 || !this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " has no damage to take" << std::endl;
		return ;
	} else if ((int)amount <= this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " takes " << (int)amount << " points of damage!" << std::endl;
		this->_hitPoints -= (int)amount;
	} else {
		std::cout << "ClapTrap " << this->_name << " takes " << this->_hitPoints << " points of damage!" << std::endl;
		this->_hitPoints = 0;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (!this->_hitPoints || !this->_energyPoints) {
		std::cout << "ClapTrap " << this->_name << " has no health or energy to be repaired" << std::endl;
		return ;
	} else if (amount <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no health or energy to be repaired" << std::endl;
		return ;
	} else {
		std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
}



