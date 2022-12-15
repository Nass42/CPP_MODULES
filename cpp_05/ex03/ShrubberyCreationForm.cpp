/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:01:59 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 16:56:35 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) : AForm(rhs), _target(rhs.getTarget()) {
	std::cout << "ShrubberyCreationForm copy constructor";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	std::cout << "ShrubberyCreationForm assignation operator" << std::endl;
	AForm::operator=(rhs);
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
	std::cout << "ShrubberyCreationForm getTarget" << std::endl;
	return this->_target;
}

/*------------------------------------------------------------*/
const char *ShrubberyCreationForm::FileNotOpenException::what() const throw() {
	return "File not open";
}
/*------------------------------------------------------------*/

void ShrubberyCreationForm::creationTarget() const{
	std::ofstream file;
	try {
		file.open((this->_target + "_shrubbery").c_str());
		if (file.fail())
			throw ShrubberyCreationForm::FileNotOpenException();
	}
	catch (std::exception &e) {
		throw;
	}
	file << "                                   .         ;  " << std::endl;
	file << "      .              .              ;%     ;;   " << std::endl;
	file << "        ,           ,                :;%  %;   " << std::endl;
	file << "         :         ;                   :;%;'     .," << std::endl;
	file << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	file << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "           `@%:.  :;%.         ;@@%;' " << std::endl;
	file << "             `@%.  `;@%.      ;@@%;" << std::endl;
	file << "               `@%%. `@%%    ;@@%;" << std::endl;
	file << "                 ;@%. :@%%  %@@%;" << std::endl;
	file << "                   %@bd%%%bd%%:;" << std::endl;
	file << "                     #@%%%%%:;;" << std::endl;
	file << "                     %@@%%%::;" << std::endl;
	file << "                     %@@@%(o);  . ' " << std::endl;
	file << "                     %@@@o%;:(.,' " << std::endl;
	file << "                 `.. %@@@o%::;" << std::endl;
	file << "                    `)@@@o%::;" << std::endl;
	file << "                     %@@(o)::;" << std::endl;
	file << "                    .%@@@@%::;" << std::endl;
	file << "                    ;%@@@@%::;." << std::endl;
	file << "                   ;%@@@@%%:;;;." << std::endl;
	file << "               ...;%@@@@@%%:;;;;,.. " << std::endl;
	file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned()) {
		try {
			if (executor.getGrade() <= this->getGradeToExecute()) {
				this->creationTarget();
				std::cout << "Form is executed" << std::endl;
			} else {
				throw AForm::GradeTooLowException();
			}
		}
		catch (std::exception &e) {
			throw;
		}
	} else {
		throw std::out_of_range("Form is not signed");
	}
}