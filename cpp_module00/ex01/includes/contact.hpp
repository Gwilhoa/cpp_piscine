/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:49:42 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/27 17:15:22 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	contact();
	contact &operator=(const contact& src);
	contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	~contact();

	std::string	tostring();
	std::string	getname();
	std::string	getlastname();
	std::string	getnickname();
	std::string	getphone();
	std::string	getsecret();
};
