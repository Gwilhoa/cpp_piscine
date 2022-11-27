/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:49:13 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/27 15:15:02 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
class phonebook
{
private:
	contact contacts[8];

public:
	phonebook();
	~phonebook();
	
	contact		*getcontacts();
	void		add(int last);
	void		search(int last);
};

