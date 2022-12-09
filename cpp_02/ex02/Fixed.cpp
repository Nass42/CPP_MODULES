/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:30:17 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/09 09:25:06 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed::~Fixed() {
}

Fixed::Fixed(const int value) {
	this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) {
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

Fixed& Fixed::operator=(const Fixed &rhs) {
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
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

// Comparison operators
bool Fixed::operator>(const Fixed &rhs) const {
	return this->_fixedPointValue > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const {
	return this->_fixedPointValue < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const {
	return this->_fixedPointValue >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const {
	return this->_fixedPointValue <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const {
	return this->_fixedPointValue == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const {
	return this->_fixedPointValue != rhs.getRawBits();
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

// Increment and decrement operators
Fixed& Fixed::operator++() {
	this->_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed& Fixed::operator--() {
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--(); // or --(*this); thats the same and means that we call the prefix operator --
	return tmp;
}

// Min and Max
Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	return a > b ? a : b;
}

