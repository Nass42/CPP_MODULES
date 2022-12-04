/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:14:57 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/04 18:19:01 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	private:
		std::string _type;
	public:
		Dog();
		Dog( Dog const& src );
		~Dog();
		Dog& operator=(Dog const& rhs);
		void makeSound() const;
};

#endif