/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:04:02 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/28 12:47:46 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ){
	return;
}

Zombie::~Zombie( void ){
	std::cout << this->_name << " has been destroyed" << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}
void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}