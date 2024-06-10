/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:26:57 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/09 23:27:34 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_T_EXCHANGE_HPP
#define B_T_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>

typedef std::string str;

class BitcoinExchange{

private:
    std::map<str, str>  _data;

    str  remove_spaces(const str& str);
    bool isLeap(int year);
    int stoi(const str &str);
    double stod(const str &str);
    str fto_string(int value);
    str last_day(const str& date);
    str next_day(const str& date);
    bool chars_all_of(const str& str, int (*F)(int));
    bool check_Date(const str &date);
    void check_Number(const str &str);

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &rhs);
    ~BitcoinExchange();

    void calc(const str &inputfile);
};

#endif


