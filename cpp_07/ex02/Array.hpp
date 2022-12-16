/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:20:27 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/16 11:23:49 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include "Array.tpp"

template <typename T>

class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &src);
		~Array();
		Array &operator=(Array const &rhs);
		T &operator[](unsigned int i);
		unsigned int size() const;
	private:
		T *_array;
		unsigned int _size;
};

#endif