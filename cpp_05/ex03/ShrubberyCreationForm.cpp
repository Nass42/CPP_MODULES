/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:01:59 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/14 13:13:55 by namohamm         ###   ########.fr       */
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

void ShrubberyCreationForm::creationTarget() const{
	std::ofstream file;
	file.open(this->_target + "_shrubbery");
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
				throw std::out_of_range("Bueraucrat grade is too low to execute the form");
			}
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	} else {
		std::cout << "Form is not signed" << std::endl;
	}
}