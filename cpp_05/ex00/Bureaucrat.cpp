/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:54:39 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/07 16:01:29 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureacrat::Bureacrat() : _name("default"), _grade(150) {
}

Bureacrat::Bureacrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureacrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureacrat::GradeTooLowException();
}

Bureacrat::Bureacrat(Bureacrat const &copy) : _name(copy._name), _grade(copy._grade) {
}

Bureacrat::~Bureacrat() {
}

Bureacrat &Bureacrat::operator=(Bureacrat const &rhs) {
	if (this != &rhs)
		_grade = rhs._grade;
	return *this;
}

std::string Bureacrat::getName() const {
	return _name;
}

int Bureacrat::getGrade() const {
	return _grade;
}

void Bureacrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw Bureacrat::GradeTooHighException();
	else
		_grade--;
}

void Bureacrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw Bureacrat::GradeTooLowException();
	else
		_grade++;
}

const char* Bureacrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Bureacrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Bureacrat const &rhs) {
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return out;
}