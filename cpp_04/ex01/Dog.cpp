/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:19:34 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/11 15:59:48 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( Dog const& rhs ): Animal(rhs) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = rhs;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog& Dog::operator=(Dog const& rhs) {
	std::cout << "Dog Assignation Operator Called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain();
		this->_brain->setIdeas(rhs._brain->getIdeaas());

	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}

Brain *Dog::getbrain() const {
	return this->_brain;
}