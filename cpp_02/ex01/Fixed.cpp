/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:59:33 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/07 11:12:36 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


/*
** what is a fixed point number?
** it is a number that is represented as an integer
** with a fractional part. The fractional part is
** represented as a fixed number of bits.
** why using fixed point numbers?
** because they are more efficient than floating point numbers
** when it comes to calculations.
** how to convert a floating point number to a fixed point number?
** multiply the floating point number by 2^fractionalBits
** how to convert a fixed point number to a floating point number?
** divide the fixed point number by 2^fractionalBits

** here an example of a fixed point number with 8 bits for the fractional part
** lets take the number 1234.4321 and fractionalBits = 8
** 1234.4321 * 2^8 = 316014.618
** roundf(316014.618) = 316015 <- this is the fixed point number
** Now lets convert the fixed point number back to a floating point number
** fixedPointNumber / 2^8 = 316015 / 256 = 1234.4296875 = 1234.43 <- this is the floating point number

** here ano
*/

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

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

int Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &rhs) {
	out << rhs.toFloat();
	return (out);
}