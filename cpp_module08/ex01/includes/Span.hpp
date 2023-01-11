/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:46:43 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/11 16:39:14 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span & src);
		Span & operator=(const Span & rhs);
		~Span();
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNumber(int n);
	private:
		unsigned int _N;
		size_t _value;
		std::vector<int> _vector;

	class FullException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Span is full";
		}
	};
	class NoSpanException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Span is empty";
		}
	};
	
};

#endif