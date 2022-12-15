/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:30:47 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 17:05:49 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &rhs) {
	*this = rhs;
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &rhs) {
	if (this != &rhs) {
		// nothing to do
	}
	return *this;
}
// AForm *Intern::makeForm(std::string const &name, std::string const &target) {
// 	if (name == "Shrubbery Creation") {
// 		return new ShrubberyCreationForm(target);
// 	}
// 	else if (name == "Robotomy Request") {
// 		return new RobotomyRequestForm(target);
// 	}
// 	else if (name == "Presidential Pardon") {
// 		return new PresidentialPardonForm(target);
// 	}
// 	else {
// 		throw std::out_of_range("Form not found");
// 	}
// }
// another way to do makeForm without using if statements or switch statements
AForm *Intern::makeForm(std::string const &name, std::string const &target) {
	std::string formNames[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	AForm *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++) {
		if (name == formNames[i]) {
			delete forms[(i + 1) % 3];
			delete forms[(i + 2) % 3];
			return forms[i];
		}
	}
	delete forms[0];
	delete forms[1];
	delete forms[2];
	throw std::out_of_range("Form not found");
}

