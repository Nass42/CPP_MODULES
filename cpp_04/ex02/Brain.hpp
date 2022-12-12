/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:36:01 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/11 14:54:44 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(Brain const &rhs);
		~Brain();
		Brain& operator=(Brain const &rhs);
		std::string	identify() const;
		void getIdeas() const;
		void setIdeas(std::string *ideas);
		std::string *getIdeaas();
		void changeIdeas();
};

#endif