/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:29:41 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/20 16:48:04 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {
}

template <typename T>
Array<T>::Array(Array const &src) {
	*this = src;
}

template <typename T>
Array<T>::~Array() {
	delete [] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs) {
	if (this != &rhs) {
		_size = rhs._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_array[i] = rhs._array[i];
		}
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) {
	if (i >= _size) {
		throw std::runtime_error("Index out of bounds");
	}
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

#endif