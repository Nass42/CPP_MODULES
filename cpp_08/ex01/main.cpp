/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:18:14 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/20 00:15:24 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void mandatory_tests(void);
void empty_container(void);
void full_container(void);
void add_numbers(int n, int m);

int main(void) {
	mandatory_tests();
	// empty_container();
	// full_container();
	// add_numbers(0, 900000);
	return 0;
}

void mandatory_tests(void) {
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void empty_container(void) {
	Span sp = Span(5);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void full_container(void) {
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		sp.addNumber(11);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void add_numbers(int n, int m) {
	if (n > m) {
		std::cout << "n must be less than m" << std::endl;
		return;
	}
	Span sp(m - n + 1);
	sp.addNumbers(n, m);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}