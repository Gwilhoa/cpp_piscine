/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:37:46 by gchatain          #+#    #+#             */
/*   Updated: 2023/03/17 15:38:21 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

std::stack<double> rpn(std::string str)
{
    std::stack <double> stack;

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
                std::cout << "Error, too many operators" << std::endl;
                return std::stack<double>();
            }
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            if (str[i] == '+') {
                stack.push(a + b);
            }
            else if (str[i] == '-') {
                stack.push(b - a);
            }
            else if (str[i] == '*') {
                stack.push(a * b);
            }
            else if (str[i] == '/') {
                if (a == 0)
                {
                    std::cout << "Error, division by zero" << std::endl;
                    return std::stack<double>();
                }
                stack.push(b / a);
            }
        }
        i++;
    }
    return stack;
}