/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:59:33 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/01 01:24:48 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Default constructor
// Sets the fixed point value to 0
Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
// Copies the fixed point value of the object passed as parameter
// to the fixed point value of the current object
// The fixed point value of the object passed as parameter is
// retrieved using the getRawBits() member function
// The fixed point value of the current object is set using the
// setRawBits() member function
// The getRawBits() and setRawBits() member functions are used
// to access the fixed point value of the current object
Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// Destructor
// Does nothing
// The destructor is called when the object goes out of scope
Fixed::~Fixed() {
	std::cout << this->_fixedPointValue << " Destructor called" << std::endl;
}

// Assignment operator
// Copies the fixed point value of the object passed as parameter
// to the fixed point value of the current object
Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << this->_fractionalBits;
}

// Assignment operator
// Copies the fixed point value of the object passed as parameter
// to the fixed point value of the current object
// the difference between this constructor and the one above is that
// the value passed as parameter is a float
// the value passed as parameter is first converted to an int
// then the fixed point value of the current object is set using the
Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

// Assignment operator

Fixed& Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignation operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

// Converts the fixed point value to an int
// this syntax with const after the function name is called a const member function
int Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_fractionalBits);
}

/*
** Non-member functions
here we overload the << operator so that we can print the value of the Fixed class
*/
std::ostream& operator<<(std::ostream &out, const Fixed &rhs) {
	out << rhs.toFloat();
	return (out);
}