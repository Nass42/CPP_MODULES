/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:19:34 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/04 18:20:36 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( Dog const& src ) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog& Dog::operator=(Dog const& rhs) {
	std::cout << "Dog Assignation Operator Called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}