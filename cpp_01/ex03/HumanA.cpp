/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:15:40 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/29 11:02:11 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA( void ) {
	return ;
}

void HumanA::attack( void ) {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return ;
}