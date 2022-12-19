/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:54:31 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/20 00:13:52 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span(void) {}

Span & Span::operator=(Span const & rhs) {
	if (this != &rhs) {
		this->_N = rhs._N;
		this->_vec = rhs._vec;
	}
	return *this;
}

void Span::addNumber(int n) {
	if (this->_vec.size() == this->_N) {
		throw Span::SpanFullException();
	}
	if (n < 0) {
		throw std::runtime_error("Number must be positive");
	}
	this->_vec.push_back(n);
}

int Span::shortestSpan(void) {
	if (this->_vec.size() <= 1) {
		throw Span::SpanEmptyException();
	}
	std::sort(this->_vec.begin(), this->_vec.end());
	int min = this->_vec[1] - this->_vec[0];
	for (unsigned int i = 1; i < this->_vec.size() - 1; i++) {
		if (this->_vec[i + 1] - this->_vec[i] < min) {
			min = this->_vec[i + 1] - this->_vec[i];
		}
	}
	return min;
}

int Span::longestSpan(void) {
	if (this->_vec.size() <= 1) {
		throw Span::SpanEmptyException();
	}
	std::sort(this->_vec.begin(), this->_vec.end());
	return this->_vec[this->_vec.size() - 1] - this->_vec[0];
}

const char* Span::SpanFullException::what() const throw() {
	return "Span is full";
}

const char* Span::SpanEmptyException::what() const throw() {
	return "Span is empty";
}

void Span::addNumbers(int n, int m) {
	srand(time(NULL));
	if (n > m) {
		throw Span::SpanFullException();
	}
	for (int i = n; i <= m; i++) {
		this->addNumber(rand() % (m - n + 1));
	}
}