/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:02 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/11 16:31:31 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const & src) : std::stack<T>(src) {}
		~MutantStack() {}

		MutantStack & operator=(MutantStack const & rhs) {
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return std::stack<T>::c.begin();
		}

		iterator end() {
			return std::stack<T>::c.end();
		}
};
