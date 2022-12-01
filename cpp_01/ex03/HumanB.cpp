/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:25:50 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/01 11:01:00 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void HumanB::attack( void ) {
	if (this->_weapon != NULL) {
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << " attacks with his fists" << std::endl;
	}
	return ;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	return ;
}