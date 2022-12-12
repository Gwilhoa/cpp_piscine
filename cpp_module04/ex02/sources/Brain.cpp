

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] default constructor called" << std::endl;
}

Brain::Brain(const Brain &c)
{
	*this = c;
}

Brain::~Brain()
{
	std::cout << "[Brain] destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain &c)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = c.ideas[i];
	return (*this);
}

