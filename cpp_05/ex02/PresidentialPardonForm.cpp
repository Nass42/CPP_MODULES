/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:00:06 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/14 13:13:51 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target) {
	std::cout << "Presidential Pardon Form Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : AForm(rhs), _target(rhs.getTarget()) {
	std::cout << "Presidential Pardon Form Copy Constructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	std::cout << "Presidential Pardon Form Assignment Operator Called" << std::endl;
	if (this != &rhs) {
		AForm::operator=(rhs);
		const_cast<std::string &>(this->_target) = rhs.getTarget();
	}
	return *this;
}

std::string PresidentialPardonForm::getTarget() const {
	std::cout << "Presidential Pardon Form Get Target Called" << std::endl;
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	std::cout << "Presidential Pardon Form Execute Called" << std::endl;
	if (this->getSigned()) {
		try {
			if (this->getSigned() && executor.getGrade() <= this->getGradeToExecute()) {
				std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
			} else {
				throw std::out_of_range("Bureaucrat grade is too low to execute this form");
			}
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	} else {
		std::cout << "Form is not signed" << std::endl;
	}
}