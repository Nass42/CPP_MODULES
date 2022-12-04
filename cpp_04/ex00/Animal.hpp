/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:47:22 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/04 18:35:36 by namohamm         ###   ########.fr       */
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
		Animal( std::string type );
		Animal( Animal const& src );
		~Animal();
		Animal& operator=(Animal const& rhs);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif