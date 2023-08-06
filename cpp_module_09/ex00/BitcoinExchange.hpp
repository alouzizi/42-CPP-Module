/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:43:39 by alouzizi          #+#    #+#             */
/*   Updated: 2023/08/06 15:33:50 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <map>
# include <fstream>
# include <sstream>
# include <string>


std::map<std::string, double> readcsv();
bool isValideDate(std::string date);
bool checkDote(std::string value);
void getResult(std::map<std::string, double> &btc);

#endif