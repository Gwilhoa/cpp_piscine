/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:57:06 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/10 20:34:20 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Converter.hpp"
#include <math.h>
#include <climits>


Converter::Converter()
{
	//std::cout << "[Converter] default constructor called" << std::endl;
}

Converter::Converter(std::string value)
{
	bool isFloat = false;
	bool isDouble = false;
	bool isInt = false;
	bool isChar = false;
	//std::cout << "[Converter] constructor called" << std::endl;
	if (value.length() == 1)
	{
		if (isdigit(value[0]))
			isInt = true;
		else
			isChar = true;
	}
	else
	{
		for (size_t i = 0; i < value.length(); i++)
		{
			if (value[i] == '.')
			{
				if (isFloat || isDouble)
					break;
				isFloat = true;
				isDouble = true;
				if (isInt)
					isInt = false;
			}
			else if (value[i] == 'f')
			{
				if (isDouble)
					isDouble = false;
				else
					break;
				isFloat = true;
			}
			else if (isdigit(value[i]))
			{
				if (isFloat || isDouble)
					isFloat = true;
				else
					isInt = true;
			}
			else
				break;
		}
		double i;
		char *test = NULL;
		i = strtod(value.c_str(), &test);
		if (test != NULL && *test != '\0')
		{
			isInt = false;
			isFloat = false;
			isDouble = false;
			isChar = false;
		}
		if (isInt)
		{
			
			if ( INT_MIN > i || i > INT_MAX )
			{
				isInt = false;
				isDouble = true;
			}
		}
		if (value.compare("nan") == 0 || value.compare("nanf") == 0 || value.compare("+inf") == 0 || value.compare("-inf") == 0 || value.compare("+inff") == 0 || value.compare("-inff") == 0 || value.compare("inf") == 0 || value.compare("inff") == 0)
			isDouble = true;
	}
	_isChar = isChar;
	_isInt = isInt;
	_isFloat = isFloat;
	_isDouble = isDouble;
	_value = value;
	return;
}

void Converter::convertChar()
{
	if (_isChar)
	{
		std::cout << "char: '" << _value[0] << "'" << std::endl;
	}
	else if (_isInt)
	{
		int i = atoi(_value.c_str());
		std::cout << "char: ";
		if (std::isprint(i))
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else if (_isFloat)
	{
		char *test;
		float f = strtod(_value.c_str(), &test);
		std::cout << "char: ";
		if (std::isprint(static_cast<int>(f)))
			std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else if (_isDouble)
	{
		double d = 0;
		try 
		{
			char *test;
			d = strtod(_value.c_str(), &test);
		} catch (std::exception &e)
		{
			std::cout << "double: impossible" << std::endl;
			return;
		}
		std::cout << "char: ";
		if (std::isprint(static_cast<int>(d)))
			std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	} 
	else
		std::cout << "char: impossible" << std::endl;
}

void Converter::convertInt()
{
	if (_isChar)
	{
		std::cout << "int: " << static_cast<int>(_value[0]) << std::endl;
	}
	else if (_isInt)
	{
		int i = atoi(_value.c_str());
		std::cout << "int: " << i << std::endl;
	}
	else if (_isFloat)
	{
				char *test;
		float f = strtod(_value.c_str(), &test);
		if (f > INT_MAX || f < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	else if (_isDouble)
	{
		double d = 0;
		try 
		{
						char *test;
			d = strtod(_value.c_str(), &test);
		} catch (std::exception &e)
		{
			std::cout << "double: impossible" << std::endl;
			return;
		}
		if (d > INT_MAX || d < INT_MIN || isnan(d))
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;
}

void Converter::convertFloat()
{
	if (_isChar)
	{
		std::cout << "float: " << static_cast<float>(_value[0]) << ".0f" << std::endl;
	}
	else if (_isInt)
	{
		int i = atoi(_value.c_str());
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	}
	else if (_isFloat)
	{
				char *test;
		float f = strtod(_value.c_str(), &test);
		std::cout << "float: " << f;
		if (f - static_cast<int>(f) == 0)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
	else if (_isDouble)
	{
		double d = 0;
		try 
		{
						char *test;
			d = strtod(_value.c_str(), &test);
		} catch (std::exception &e)
		{
			std::cout << "float: impossible" << std::endl;
			return;
		}
		std::cout << "float: " << static_cast<float>(d);
		if (d - static_cast<int>(d) == 0)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
	else
		std::cout << "float: impossible" << std::endl;
}

void Converter::convertDouble()
{
	if (_isChar)
	{
		std::cout << "double: " << static_cast<double>(_value[0]) << ".0" << std::endl;
	}
	else if (_isInt)
	{
		int i = atoi(_value.c_str());
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
	else if (_isFloat)
	{
		char *test;
		float f = strtod(_value.c_str(), &test);
		std::cout << "double: " << static_cast<double>(f);
		if (f - static_cast<int>(f) == 0)
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
	else if (_isDouble)
	{
		double d = 0;
		try 
		{
			char *test;
			d = strtod(_value.c_str(), &test);
		} catch (std::exception &e)
		{
			std::cout << "double: impossible" << std::endl;
			return;
		}
		std::cout << "double: " << d;
		if (d - static_cast<int>(d) == 0)
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
	else
		std::cout << "double: impossible" << std::endl;
}


Converter::Converter(const Converter &c)
{
	*this = c;
}

Converter::~Converter()
{
	//std::cout << "[Converter] destructor called" << std::endl;
}

Converter & Converter::operator=(const Converter &c)
{
	(void)c;
	return (*this);
}
