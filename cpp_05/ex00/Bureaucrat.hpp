/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:51:55 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/07 16:05:44 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureacrat
{
	private:
		std::string const   _name;
		int                 _grade;
		Bureacrat();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	public:
		Bureacrat(std::string name, int grade);
		Bureacrat(Bureacrat const &copy);
		~Bureacrat();
		Bureacrat &operator=(Bureacrat const &rhs);
		std::string getName() const;
		int         getGrade() const;
		void        incrementGrade();
		void        decrementGrade();
};

std::ostream &operator<<(std::ostream &out, Bureacrat const &rhs);

#endif