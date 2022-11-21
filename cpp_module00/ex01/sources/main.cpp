#include "phonebook.hpp"


static std::string ft_strupper(std::string str)
{
	int i = 0;
	while (str[i] != 0)
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int main(int argc, char const *argv[])
{
	(void) argv;
	phonebook pb;
	std::string str;

	std::cout << "\nEnter command: ";
	while (std::getline(std::cin, str))
	{
		str = ft_strupper(str);
		if (str.compare("ADD") == 0)
			pb.add();
		else if (str.compare("SEARCH") == 0)
			pb.search();
		else if (str.compare("EXIT") == 0)
		{
			pb.~phonebook();
			return (0);
		}
		else {
			std::cout << "\nError : " << str << " command not found";
		}
		std::cout << "\nEnter command: ";
	}
	std::cout << "\nforced exit" << std::endl;
	pb.~phonebook();
	return argc;
}
