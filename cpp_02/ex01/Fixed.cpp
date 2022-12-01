/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:59:33 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/30 00:13:56 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
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

bool Fixed::operator>(const Fixed &copy) const {
	return (this->_fixedPointValue > copy.getRawBits());
}

bool Fixed::operator<(const Fixed &copy) const {
	return (this->_fixedPointValue < copy.getRawBits());
}

bool Fixed::operator>=(const Fixed &copy) const {
	return (this->_fixedPointValue >= copy.getRawBits());
}

bool Fixed::operator<=(const Fixed &copy) const {
	return (this->_fixedPointValue <= copy.getRawBits());
}

bool Fixed::operator==(const Fixed &copy) const {
	return (this->_fixedPointValue == copy.getRawBits());
}

bool Fixed::operator!=(const Fixed &copy) const {
	return (this->_fixedPointValue != copy.getRawBits());
}

Fixed Fixed::operator+(const Fixed &copy) const {
	return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed Fixed::operator-(const Fixed &copy) const {
	return (Fixed(this->toFloat() - copy.toFloat()));
}

Fixed Fixed::operator*(const Fixed &copy) const {
	return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed Fixed::operator/(const Fixed &copy) const {
	return (Fixed(this->toFloat() / copy.toFloat()));
}

Fixed &Fixed::operator++() {
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->_fixedPointValue++;
	return (temp);
}

Fixed &Fixed::operator--() {
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->_fixedPointValue--;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &copy) {
	out << copy.toFloat();
	return (out);
}


