/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:13:06 by gchatain          #+#    #+#             */
/*   Updated: 2023/03/17 16:20:02 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
std::vector<int> sortedVector(std::vector<int> vector, size_t size)
{
    if (vector.size() == 1)
        return vector;
    if (vector.size() <= size) {
        for (std::vector<int>::iterator it = vector.begin() + 1; it != vector.end(); it++) {
            for (std::vector<int>::iterator it2 = vector.begin(); it2 != vector.end(); it2++) {
                if (*it < *it2) {
                    int tmp = *it;
                    *it = *it2;
                    *it2 = tmp;
                    break;
                }
            }
        }
        return vector;
    }
    else {
        std::vector<int> left;
        std::vector<int> right;
        for (size_t i = 0; i < vector.size() / 2; i++) {
            left.push_back(vector[i]);
        }
        for (size_t i = vector.size() / 2; i < vector.size(); i++) {
            right.push_back(vector[i]);
        }
        left = sortedVector(left, size);
        right = sortedVector(right, size);
        std::merge(left.begin(), left.end(), right.begin(), right.end(), vector.begin());
        return vector;
    }
}

std::list<int> sortedList(std::list<int> list, size_t size)
{
    if (list.size() == 1)
        return list;
    if (list.size() <= size) {
        for (std::list<int>::iterator it = list.begin()++; it != list.end(); it++) {
            if (it == list.end())
                break;
            for (std::list<int>::iterator it2 = list.begin(); it2 != list.end(); it2++) {
                if (*it < *it2) {
                    int tmp = *it;
                    *it = *it2;
                    *it2 = tmp;
                    break;
                }
            }
        }
        return list;
    }
    else {
        std::list<int> left;
        std::list<int> right;
        for (size_t i = 0; i < list.size() / 2; i++) {
            left.push_back(list.front());
            list.pop_front();
        }
        for (size_t i = list.size() / 2; i < list.size(); i++) {
            right.push_back(list.front());
            list.pop_front();
        }
        left = sortedList(left, size);
        right = sortedList(right, size);
        left.merge(right);
        return left;
    }
}