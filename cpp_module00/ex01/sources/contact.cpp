/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:22:59 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/27 15:10:48 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

contact::contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}



contact::~contact()
{
}

contact & contact::operator=(const contact& src)
{
	if (&src == this)
		return (*this);
	this->first_name = src.first_name;
	this->last_name = src.last_name;
	this->nickname = src.nickname;
	this->phone_number = src.phone_number;
	this->darkest_secret = src.darkest_secret;
	return (*this);
}

std::string contact::getname()
{
	return (this->first_name);
}

std::string contact::getlastname()
{
	return (this->last_name);
}

std::string contact::getnickname()
{
	return (this->nickname);
}

std::string contact::getphone()
{
	return (this->phone_number);
}

std::string contact::getsecret()
{
	return (this->darkest_secret);
}

std::string contact::tostring()
{
	std::string	str;
	str = "First name: " + this->first_name + "\n";
	str += "Last name: " + this->last_name + "\n";
	str += "Nickname: " + this->nickname + "\n";
	str += "Phone number: " + this->phone_number + "\n";
	str += "Darkest secret: " + this->darkest_secret + "\n";
	return (str);
}