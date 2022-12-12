/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:37:15 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/12 16:28:50 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(5) {
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
	_name(name), _signed(false), _gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &rhs) :
	_name(rhs._name), _signed(rhs._signed),
	_gradeToSign(rhs._gradeToSign), _gradeToExecute(rhs._gradeToExecute) {
}

Form::~Form() {
}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs) {
		_signed = rhs._signed;
	}
	return *this;
}

std::string Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return _signed;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExecute() const {
	return _gradeToExecute;
}

void Form::beSigned(Bureaucrat const &rhs) {
	if (rhs.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Form const &rhs) {
	out << "Form name: " << rhs.getName() << std::endl;
	out << "Signed: " << rhs.getSigned() << std::endl;
	out << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
	out << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;
	return out;
}

