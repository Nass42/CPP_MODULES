/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:21:44 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/11 15:55:44 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat( Cat const& rhs );
		~Cat();
		Cat& operator=(Cat const& rhs);
		void makeSound() const;
		Brain *getbrain() const;
};

#endif