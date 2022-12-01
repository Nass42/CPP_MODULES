/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:19:19 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/29 10:38:33 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->_type = type;
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

std::string const &Weapon::getType(void) {
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
	return ;
}