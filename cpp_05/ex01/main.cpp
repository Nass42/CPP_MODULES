/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:57:50 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/12 23:15:12 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	std::cout << "--------------------" << std::endl;
	try {
		Bureaucrat b("Nass", 3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	try {
		b.incrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	std::cout << b.getGrade() << std::endl;
	std::cout << "--------------------" << std::endl;
	try {
		b.decrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	std::cout << b.getGrade() << std::endl;
	std::cout << "--------------------" << std::endl;
	return 0;
}