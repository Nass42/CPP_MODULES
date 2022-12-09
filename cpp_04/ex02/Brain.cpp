/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:09:48 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/09 11:17:21 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstdlib>

Brain::Brain() {
	std::cout << "Brain Default Constructor Called" << std::endl;
	std::string idea[5] = {"Play ", "Eat", "Jump", "Sleep", "Think"};
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea[i % 5];
}

Brain::Brain( Brain const& src ) {
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = src;
}

Brain::~Brain() {
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain& Brain::operator=(Brain const& rhs) {
	std::cout << "Brain Assignation Operator Called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

void Brain::getIdeas() const {
	for (int i = 0; i < 5; i++)
		std::cout << this->_ideas[i] << std::endl;
}

void Brain::changeIdeas() {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Another ideas";
}

void Brain::setIdeas(std::string &idea, int index) {
	this->_ideas[index] = idea;
}
