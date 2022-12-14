/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:57:50 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/14 13:17:44 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void shrubberyTests();
void robotomyTests();
void presidentialTests();
void executeFormTests();

int main() {
	std::cout <<"Shrubbery Creation Form Tests"<< std::endl;
	shrubberyTests();
	std::cout <<"\nRobotomy Request Form Tests"<< std::endl;
	robotomyTests();
	std::cout <<"\nPresidential Pardon Form Tests"<< std::endl;
	presidentialTests();
	std::cout <<"\nBureaucrat::executeForm() Tests"<< std::endl;
	executeFormTests();

	return 0;
}

void tryCatch(std::string name, int grade, AForm &f) {
	try {
		std::cout << std::endl;
		Bureaucrat b(name, grade);
		std::cout << b << b.getName() << " attempts to sign "
				  << f.getName() << std::endl;
		b.signAForm(f);
		f.execute(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void shrubberyTests() {
	ShrubberyCreationForm f("home");
	std::cout << f;

	tryCatch("Jade", 150, f);
	tryCatch("Sam", 145, f);
	tryCatch("Sasha", 137, f);
}

void robotomyTests() {
	RobotomyRequestForm f("Robert");
	std::cout << f;

	tryCatch("Jade", 150, f);
	tryCatch("Sam", 72, f);
	tryCatch("Sasha", 45, f);
}

void presidentialTests() {
	PresidentialPardonForm f("Albert");
	std::cout << f;

	tryCatch("Jade", 150, f);
	tryCatch("Sam", 25, f);
	tryCatch("Sasha", 5, f);
}

void executeFormTests() {
	Bureaucrat b("Jill", 1);

	{
		ShrubberyCreationForm s("outdoor");
		b.signAForm(s);
		b.executeForm(s);
	}

	{
		std::cout << std::endl;
		RobotomyRequestForm r("Ben");
		b.signAForm(r);
		b.executeForm(r);
	}

	{
		std::cout << std::endl;
		PresidentialPardonForm p("Emmeline");
		b.signAForm(p);
		b.executeForm(p);
	}
}
