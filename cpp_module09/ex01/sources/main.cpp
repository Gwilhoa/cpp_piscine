/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:37:57 by gchatain          #+#    #+#             */
/*   Updated: 2023/03/13 14:50:15 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stack>
std::stack<int> rpn(std::string str);

int main(int argc, char *argv[])
{
	if (argc != 2){
		std::cout << "Error, Executed Format : /RPN \"1 2 3 /\"" << std::endl;
        return 0;
	}
	std::string str = std::string(argv[1]);
	size_t i = 0;
    while (i < str.length())
    {
        if (str[i] != ' ' && str[i] != '-' && str[i] != '+' && str[i] != '*' && str[i] != '/')
        {
            if (str[i] < '0' || str[i] > '9')
            {
                std::cout << "Error, unrecognized token : " << str[i] << std::endl;
                return 0;
            }
        }
        i++;
    }
    std::stack <int> stack = rpn(str);
    if (stack.empty())
        return 0;
    while (!stack.empty())
    {
        std::cout << stack.top() << " ";
        stack.pop();
    }
}