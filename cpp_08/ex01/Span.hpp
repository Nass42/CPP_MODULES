/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:43:04 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/20 00:06:17 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>


class Span
{
	private:
		Span(void);
		std::vector<int> _vec;
		unsigned int _N;
	public:
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span & operator=(Span const & rhs);

		void addNumber(int n);
		int shortestSpan(void);
		int longestSpan(void);

		void addNumbers(int n, int m);

		class SpanFullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class SpanEmptyException : public std::exception
		{
				virtual const char* what() const throw();
		};

};

#endif