/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 23:56:28 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/14 12:16:55 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs)
	: AForm(rhs), _target(rhs.getTarget()) {
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destroyed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm
	const &rhs) {
	std::cout << "RobotomyRequestForm assigned" << std::endl;
	if (this != &rhs) {
		AForm::operator=(rhs);
		const_cast<std::string&>(this->_target) = rhs.getTarget();
	}
	return *this;
}

std::string RobotomyRequestForm::getTarget() const {
	std::cout << "RobotomyRequestForm getTarget called" << std::endl;
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	std::cout << "RobotomyRequestForm execute called" << std::endl;
	if (this->getSigned()) {
		try {
			srand(time(NULL));
			if (this->getSigned() &&
				executor.getGrade() <= this->getGradeToExecute()) {
				if (rand() % 2) {
					std::cout << this->getTarget()
						<< " has been robotomized" << std::endl;
				} else {
					std::cout << this->getTarget()
						<< " has not been robotomized" << std::endl;
				}
			} else {
				throw std::out_of_range
				("Bureaucrat grade is too low to execute this form");
			}
		} catch (std::out_of_range &e) {
			std::cerr << e.what() << std::endl;
		}
	} else {
		std::cout << "Form is not signed" << std::endl;
	}
}

