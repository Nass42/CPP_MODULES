/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:47:22 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/09 14:20:57 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal( Animal const& rhs );
		virtual ~Animal();
		Animal& operator=(Animal const& rhs);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif