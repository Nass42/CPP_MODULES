/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:57:50 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 17:14:50 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void tryCatch(Bureaucrat &b, Intern &i, std::string formName, std::string formTarget) {
	std::cout << std::endl;
	try {
		if (formName.empty() || formTarget.empty()) {
			throw std::invalid_argument("Invalid parameters");
		}
		AForm *f = i.makeForm(formName, formTarget);
		std::cout << *f;
		b.signAForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int main() {
	std::cout <<"Intern::makeForm() Tests"<< std::endl;
	Bureaucrat b1("Martin", 1);
	Bureaucrat b150("Luna", 150);
	Intern i;

	tryCatch(b150, i, "Shrubbery Creation", "Limelight");
	tryCatch(b150, i, "Robotomy Request", "Bob");
	tryCatch(b150, i, "Presidential Pardon", "Claire");
	tryCatch(b150, i, "Hogwarts Enrollment", "Dumbledore");

	tryCatch(b1, i, "Shrubbery Creation", "Limelight");
	tryCatch(b1, i, "Robotomy Request", "Bob");
	tryCatch(b1, i, "Presidential Pardon", "Claire");
	tryCatch(b1, i, "Hogwarts Enrollment", "Dumbledore");

	return 0;
}
