/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:30:47 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/14 14:19:14 by namohamm         ###   ########.fr       */
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
		// do stuff
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
			return forms[i];
		}
	}
	throw std::out_of_range("Form not found");
}

