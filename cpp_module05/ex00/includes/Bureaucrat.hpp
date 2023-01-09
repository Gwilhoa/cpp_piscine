
#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP
#include <iostream>
class Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &c);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &c);

		int getGrade() const;
		std::string getName() const;
		void upGrade();
		void downGrade();


		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};

	private :
		std::string const _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);



#endif

