/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:52:33 by gchatain          #+#    #+#             */
/*   Updated: 2022/09/16 08:43:24 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdio>
# include <iomanip>
# include <cstring>
# include <ctime>
# include <cstdlib>
# include <sstream>
# include <fstream>


std::string get_file_content(std::string filename)
{
	std::string ret;
	std::stringstream fcontent;
	std::ifstream fd(filename);
	if (!fd.is_open())
		return (ret);
	fcontent << fd.rdbuf();
	ret = fcontent.str();
	return (ret);
}

void write_file(std::string filename, std::string content)
{
	std::ofstream myfile;

	myfile.open(filename);
	myfile << content;
	myfile.close();
}

int main(int argc, char const *argv[]) {
	std::string	filename;
	std::string	content;
	std::string	string;
	std::string	replace;
	std::string	ret;

	string = argv[2];
	replace = argv[3];
	if (argc != 4) {
		std::cout << "error arguments : ./ex04 [filename] [string] [replace]\n";
		return (1);
	}
	else if (string == replace)
	{
		std::cout << "error arguments : string and replace should not be same" << std::endl;
		return (1);
	} else {
		filename = argv[1];
		content = get_file_content(argv[1]);
		if (content.empty()) {
			std::cout << "error file : no such file or denied permission" << std::endl;
			return (1);
		}
		while (content.find(string) != std::string::npos) {
			ret.append(content.substr(0, content.find(string))).append(replace);
			content = content.substr(content.find(string) + string.size());
		}
		write_file(filename.append(".replace"), ret);
	}
}

