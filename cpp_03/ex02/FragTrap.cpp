/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:25:40 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/04 14:27:52 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap Name Constructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "FragTrap Assignation Operator Called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " gives high fives to everyone" << std::endl;
}
