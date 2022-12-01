/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:55:48 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/01 10:46:42 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Zombie created" << std::endl;
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
	return ;
}


void	Zombie::setName( std::string name ) {
	this->_name = name;
	return ;
}

void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}