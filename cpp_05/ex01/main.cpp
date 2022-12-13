/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:57:50 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/13 09:35:13 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bureaucrat_1("Nass", 3);
	Bureaucrat bureaucrat_2("Ssan", 75);
	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;
	/*-----------------------------------*/
	Form form_1("Form_1", 5, 10);
	std::cout << form_1 << std::endl;
	/*-----------------------------------*/
	try {
		Form form_2("Form_1", 8996, 10);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	try {
		bureaucrat_1.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	std::cout << form_1 << std::endl;
	/*-----------------------------------*/
	try {
		bureaucrat_2.signForm(form_1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	/*-----------------------------------*/
	std::cout << form_1 << std::endl;
	return 0;
}