/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:21:08 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/06 16:26:54 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( Cat const& src ) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = src;
	this->_brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(Cat const& rhs) {
	std::cout << "Cat Assignation Operator Called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow meow!" << std::endl;
}

Brain Cat::getbrain() const {
	return *this->_brain;
}