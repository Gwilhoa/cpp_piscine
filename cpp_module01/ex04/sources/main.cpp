/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:52:33 by gchatain          #+#    #+#             */
/*   Updated: 2022/09/14 15:21:58 by gchatain         ###   ########.fr       */
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

std::string ft_replace(int pos, int str_size, std::string replace, std::string content)
{
	std::string ret;
	ret = content.substr(0, pos);
	ret.append(replace).append(content.substr(pos+str_size, content.size()));
	return ret;
}

int main(int argc, char const *argv[]) {
	std::string filename;
	std::string content;
	std::string string;
	std::string replace;
	if (argc != 4) {
		std::cout << "error arguments : ./ex04 [filename] [string] [replace]\n";
		return (1);
	} else {
		filename = argv[1];
		content = get_file_content(argv[1]);
		if (content.empty()) {
			std::cout << "error file : no such file or denied permission" << std::endl;
			return (1);
		}
		string = argv[2];
		replace = argv[3];
		while (content.find(string) != std::string::npos) {
			content = ft_replace(content.find(string), string.size(), replace, content);
		}
		std::cout << content << std::endl;
	}
}

