/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:28:02 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/09 23:33:11 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src){*this = src;}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        _data = other._data;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange()
{
    str line;
    std::ifstream file("data.csv");

     if (!file.is_open()) {
        std::cout << "Error: file does not exist" << std::endl;
        exit(1);
    }

    if (file.peek() == std::ifstream::traits_type::eof()) {
        std::cout << "Error: file is empty" << std::endl;
        exit(1);
    }

    std::getline(file, line);
    while (std::getline(file, line))
    {
        size_t separator = line.find(',');

        str date = remove_spaces(line.substr(0, separator));
        str value = remove_spaces(line.substr(separator + 1, line.length()));

        _data[date] = value;
    }

    file.close();
}

str BitcoinExchange::remove_spaces(const str& str) {
    size_t first_char = str.find_first_not_of(' ');
    if (first_char == str::npos)
        return str;

    size_t last_char = str.find_last_not_of(' ');
    return str.substr(first_char, (last_char - first_char + 1));
}

bool BitcoinExchange::isLeap(int year){return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;}

int BitcoinExchange::stoi(const str &str)
{
    std::stringstream ss(str);
    int value;

    ss >> value;

    return value;
}

double BitcoinExchange::stod(const str &str)
{
    std::stringstream ss(str);
    double value;

    ss >> value;

    return value;
}

str BitcoinExchange::fto_string(int value)
{
    std::stringstream ss;

    ss << value;

    return ss.str();
}

str BitcoinExchange::last_day(const str& date) {
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeap(year))
        daysInMonth[2] = 29;
    
    day--;

    if (day == 0) {
        month--;
        if (month == 0) {
            month = 12;
            year--;
        }
        day = daysInMonth[month];
    }

    str newYear = fto_string(year);
    str newMonth = (month < 10) ? "0" + fto_string(month) : fto_string(month);
    str newDay = (day < 10) ? "0" + fto_string(day) : fto_string(day);

    return newYear + "-" + newMonth + "-" + newDay;
}

str BitcoinExchange::next_day(const str& date) {
    str year = date.substr(0, 4);
    str month = date.substr(5, 2);
    str day = date.substr(8, 2);

    int yearInt = stoi(year);
    int monthInt = stoi(month);
    int dayInt = stoi(day);

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeap(yearInt))
        daysInMonth[2] = 29;
    dayInt++;

    if (dayInt > daysInMonth[monthInt]) {
        dayInt = 1;
        monthInt++;
        if (monthInt > 12) {
            monthInt = 1;
            yearInt++;
        }
    }
    str nextYear = fto_string(yearInt);
    str nextMonth = (monthInt < 10) ? "0" + fto_string(monthInt) : fto_string(monthInt);
    str nextDay = (dayInt < 10) ? "0" + fto_string(dayInt) : fto_string(dayInt);

    return nextYear + "-" + nextMonth + "-" + nextDay;
}

bool BitcoinExchange::chars_all_of(const str& str, int (*F)(int)) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!F(str[i]))
            return false;
    }
    return true;
}

bool BitcoinExchange::check_Date(const str &date)
{
    if (date.length() != 10)
        return false;

    if (date[4] != '-' || date[7] != '-')
        return false;

    str year = date.substr(0, 4);
    str month = date.substr(5, 2);
    str day = date.substr(8, 2);


    if ((!chars_all_of(year, &std::isdigit)) ||
        (!chars_all_of(month, &std::isdigit)) ||
        (!chars_all_of(day, &std::isdigit)))
        return false;

    int yearInt, monthInt, dayInt;

    std::stringstream ssYear(year);
    std::stringstream ssMonth(month);
    std::stringstream ssDay(day);

    ssYear >> yearInt;
    ssMonth >> monthInt;
    ssDay >> dayInt;

    if ((yearInt < 2009 || yearInt > 2022) ||
        (monthInt < 1 || monthInt > 12) ||
        (dayInt < 1 || dayInt > 31))
        return false;

    if ((monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11) && dayInt > 30)
        return false;
    
    if (monthInt == 2) {
        bool isLeap = this->isLeap(yearInt);
        if (dayInt > (isLeap ? 29 : 28))
            return false;
    }
    return true;
}

void BitcoinExchange::check_Number(const str &str) {
    double value;

    try {
        if (std::find(str.begin(), str.end(), '.') != str.end()) {
            size_t decimalPoint = str.find('.');
            if (std::find(str.begin() + decimalPoint + 1, str.end(), '.') != str.end())
                throw std::invalid_argument("too many decimal points");
        }

        bool hasSign = str[0] == '+' || str[0] == '-';
        for (size_t i = hasSign ? 1 : 0; i < str.length(); i++) {
            if (std::isdigit(str[i]) || str[i] == '.')
                continue;
            throw std::invalid_argument("not a number => " + str);
        }

        value = stod(str);

    } catch (std::exception &e) {
        throw std::invalid_argument("not a number => " + str);
    }

    if (value < 0)
        throw std::invalid_argument("not a positive number");

    if (value > 1000.0)
        throw std::invalid_argument("too large a number");
}

void BitcoinExchange::calc(const str &filename)
{
    std::ifstream   file(filename.c_str());
    str          line;

    if (!file.is_open()) {
        std::cout << "Error: file does not exist" << std::endl;
        exit(1);
    }

    if (file.peek() == std::ifstream::traits_type::eof()) {
        std::cout << "Error: file is empty" << std::endl;
        exit(1);
    }

    std::getline(file, line); // skip first line

    if (line != "date | value") {
        std::cout << "Error: invalid file format" << std::endl;
        exit(1);
    }

    while (std::getline(file, line))
    {
        size_t delim = line.find('|');
        if (delim == str::npos)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        str date = remove_spaces(line.substr(0, delim));
        str value = remove_spaces(line.substr(delim + 1));

        try {
            if (!check_Date(date))
                throw std::invalid_argument("invalid date: " + (date.empty() ? "\"\"" : "'" + date + "'"));

            if(value.empty())
                throw std::invalid_argument("invalid value: " + (value.empty() ? "\"\"" : "'" + value + "'"));

            check_Number(value);

            std::map<str, str>::iterator it;
            str prevDate = date;
            it = _data.find(date);

            while (it == _data.end()) {
                const str& currentDate = prevDate;
                prevDate = last_day(currentDate);
                it = _data.find(prevDate);
            }

            std::cout << date << " => " << value  << " = "
                << stod(it->second) * stod(value) << std::endl;

        } catch (std::exception &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }

    }

    file.close();
}