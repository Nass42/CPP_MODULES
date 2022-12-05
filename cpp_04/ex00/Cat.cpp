/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:21:08 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/05 22:34:37 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat( Cat const& src ) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat Destructor Called" << std::endl;
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