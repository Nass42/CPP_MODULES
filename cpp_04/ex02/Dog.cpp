/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:19:34 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/09 11:10:47 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( Dog const& src ) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = src;
	this->_brain = new Brain();
}

Dog::~Dog() {
	delete this->_brain;
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

Brain Dog::getbrain() const {
	return *this->_brain;
}