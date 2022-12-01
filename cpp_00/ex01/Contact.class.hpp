/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:48:56 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/21 13:50:28 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		long int	_phoneNumber;
		std::string	_darkestSecret;
	public:
		Contact(void);
		~Contact(void);
		void		setFirstName(void);
		void		setLastName(void);
		void		setNickname(void);
		void		setPhoneNumber(void);
		void		setDarkestSecret(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		long int	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
		void		printContact(void);
};

#endif