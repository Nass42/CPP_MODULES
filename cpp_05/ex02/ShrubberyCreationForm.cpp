/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:01:59 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/13 14:03:15 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) : AForm(rhs), _target(rhs.getTarget()) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	AForm::operator=(rhs);
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::ofstream file;
	file.open(this->_target + "_shrubbery");
	file << "          v" << std::endl;
	file << "         >X<" << std::endl;
	file << "          A" << std::endl;
	file << "         d$b" << std::endl;
	file << "        d$$b" << std::endl;
	file << "       d$$$b" << std::endl;
	file << "      d$$$$$b" << std::endl;
	file << "     d$$$$$$$b" << std::endl;
	file << "    d$$$$$$$$$b" << std::endl;
	file << "   d$$$$$$$$$$$b" << std::endl;
	file << "  d$$$$$$$$$$$$$b" << std::endl;
	file << " d$$$$$$$$$$$$$$$b" << std::endl;
	file << "d$$$$$$$$$$$$$$$$$b" << std::endl;
	file << "      ###" << std::endl;
	file << "      ###" << std::endl;
	file << "      ###" << std::endl;
	file.close();
}