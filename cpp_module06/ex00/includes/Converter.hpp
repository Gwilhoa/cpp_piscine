
#ifndef Converter_HPP
# define Converter_HPP
#include <iostream>
#include <iomanip>
class Converter
{
	public :
		Converter();
		Converter(std::string value);
		Converter(const Converter &c);
		~Converter();
		Converter & operator=(const Converter &c);
		void convertChar();
		void convertInt();
		void convertFloat();
		void convertDouble();
	private :
		bool _isChar;
		bool _isInt;
		bool _isFloat;
		bool _isDouble;
		std::string _value;
		
};
#endif

