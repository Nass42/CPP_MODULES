/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:09:48 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/06 16:14:46 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Idea " + std::to_string(i);
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
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}
