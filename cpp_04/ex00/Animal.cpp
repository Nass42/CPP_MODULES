/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:11:53 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/11 10:45:59 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type() {
	std::cout << "Animal Default Constructor Called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal( Animal const& rhs ) {
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = rhs;
}

Animal::~Animal() {
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal& Animal::operator=(Animal const& rhs) {
	std::cout << "Animal Assignation Operator Called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const {
	std::cout << "Animal Sound!" << std::endl;
}