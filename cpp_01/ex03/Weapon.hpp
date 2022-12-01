/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:48:13 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/29 10:38:41 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon( std::string type );
		~Weapon( void );
		std::string const &getType(void);
		void setType(std::string type);
};

#endif