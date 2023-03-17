/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:37:46 by gchatain          #+#    #+#             */
/*   Updated: 2023/03/17 14:13:42 by gchatain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

std::stack<int> rpn(std::string str)
{
    std::stack <int> stack;

    size_t i = 0;
    while (i < str.length())
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            stack.push(str[i] - '0');
        }
        else {
            if (stack.size() < 2)
            {
                std::cout << "Error, not enough operands" << std::endl;
                return std::stack<int>();
            }
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            if (str[i] == '+')
                stack.push(a + b);
            else if (str[i] == '-')
                stack.push(b - a);
            else if (str[i] == '*')
                stack.push(a * b);
            else if (str[i] == '/') {
                if (b == 0)
                {
                    std::cout << "Error, division by zero" << std::endl;
                    return std::stack<int>();
                }
                stack.push(b / a);
            }
        }
        i++;
    }
    return stack;
}