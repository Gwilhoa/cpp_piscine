/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:14:05 by gchatain          #+#    #+#             */
/*   Updated: 2023/03/17 15:26:37 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <map>
#include <iostream>
#include <cstdlib>
#include <string>

std::map<std::string, double> getDataBase();
void readfile(std::string filename, std::map<std::string, double> database);
int isDateValid(std::string date);