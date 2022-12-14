/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:37:15 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/13 09:21:13 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(5) {
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) :
	_name(name), _signed(false), _gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &rhs) :
	_name(rhs._name), _signed(rhs._signed),
	_gradeToSign(rhs._gradeToSign), _gradeToExecute(rhs._gradeToExecute) {
}

AForm::~AForm() {
}

AForm &AForm::operator=(AForm const &rhs) {
	if (this != &rhs) {
		_signed = rhs._signed;
	}
	return *this;
}

std::string AForm::getName() const {
	return _name;
}

bool AForm::getSigned() const {
	return _signed;
}

int AForm::getGradeToSign() const {
	return _gradeToSign;
}

int AForm::getGradeToExecute() const {
	return _gradeToExecute;
}

void AForm::beSigned(Bureaucrat const &rhs) {
	if (rhs.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	else
		_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "+ Grade is too high +";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "+ Grade is too low +";
}

std::ostream &operator<<(std::ostream &out, AForm const &rhs) {
	out << "AForm name: " << rhs.getName() << std::endl;
	out << "Signed: " << rhs.getSigned() << std::endl;
	out << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
	out << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;
	return out;
}