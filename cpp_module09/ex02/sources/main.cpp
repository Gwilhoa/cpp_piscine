/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:37:57 by gchatain          #+#    #+#             */
/*   Updated: 2023/03/20 13:11:53 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <algorithm>



std::vector<int> sortedVector(std::vector<int> vector, size_t size);
std::list<int> sortedList(std::list<int> list, size_t size);

int main(int argc, char *argv[])
{
    if (argc <= 2) {
        std::cout << "not enough argument" << std::endl;
    }
    else {
        clock_t start;
        clock_t end;
        double vectorTime;
        double listTime;
        size_t size;
        for (int i = 1; i < argc; i++) {
            for (int j = 0; argv[i][j] != '\0'; j++)
                if (!isnumber(argv[i][j])) {
                    std::cout << "Error" << std::endl;
                    return 0;
                }

            if (atoi(argv[i]) < 0) {
                std::cout << "Error" << std::endl;
                return 0;
            }
        }
        std::cout << "before: ";
        std::list<int> list;
        std::vector<int> vector;
        for (int i = 1; i < argc; i++) {
            std::cout << argv[i] << " ";
            list.push_back(atoi(argv[i]));
        }
        for (int i = 1; i < argc; i++) {
            vector.push_back(atoi(argv[i]));
        }
        std::cout << "\nafter: ";
        size = vector.size()/100 + 2;
        start = clock();
        std::sort(vector.begin(), vector.end());
        end = clock();
        std::vector<int> vector1 = sortedVector(vector, size);
        end = clock();
        vectorTime = ((double)end - start)/(double)CLOCKS_PER_SEC;
        vectorTime = vectorTime*1000000.0;
        for (std::vector<int>::iterator it = vector1.begin(); it != vector1.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "\nVector time: " << vectorTime << "us" << std::endl;
        start = clock();
        sortedList(list, size);
        end = clock();
        listTime = ((double)end - start)/(double)CLOCKS_PER_SEC;
        listTime = listTime*1000000.0;
        std::cout << "List time: " << listTime << "us" << std::endl;
    }
}