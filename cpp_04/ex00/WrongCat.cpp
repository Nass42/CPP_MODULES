/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:45:37 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/11 12:03:19 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const& rhs ) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat sound!" << std::endl;
}