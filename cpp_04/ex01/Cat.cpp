/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:21:08 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/11 15:55:57 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( Cat const& rhs ): Animal(rhs) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = rhs;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs) {
	std::cout << "Cat Assignation Operator Called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain();
		this->_brain->setIdeas(rhs._brain->getIdeaas());

	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow meow!" << std::endl;
}

Brain *Cat::getbrain() const {
	return this->_brain;
}