/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:00:40 by namohamm          #+#    #+#             */
/*   Updated: 2022/11/25 16:35:05 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

class PhoneBook {
	private:
		Contact		_contacts[8];
		int			_index;
		int			_maxIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		addContact(Contact contact);
		void		searchContact(void);
		void		printContacts(void);
};

#endif