/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:11:53 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/04 18:33:32 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal") {
	std::cout << "Animal Default Constructor Called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal( std::string type ): _type(type) {
	std::cout << "Animal Parametric Constructor Called" << std::endl;
	this->_type = type;
}

Animal::Animal( Animal const& src ) {
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = src;
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