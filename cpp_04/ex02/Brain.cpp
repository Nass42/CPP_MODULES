/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:09:48 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/11 16:09:47 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstdlib>

std::string random_idea() {
	std::string idea[5] = {"Play ", "Eat", "Jump", "Sleep", "Think"};
	return idea[rand() % 5];
}
Brain::Brain() {
	std::cout << "Brain Default Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = random_idea();
}

Brain::Brain( Brain const& rhs ) {
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = rhs;
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

std::string *Brain::getIdeaas() {
	return this->_ideas;
}

void Brain::setIdeas(std::string *ideas) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
}