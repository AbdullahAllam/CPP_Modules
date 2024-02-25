/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:41:51 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/25 13:06:36 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts),
                                        _amount(initial_deposit),
                                        _nbDeposits(0),
                                        _nbWithdrawals(0) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::~Account(void) {
    _nbAccounts--;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
              << ";closed" << std::endl;
}

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
              << "total:" << getTotalAmount() << ";"
              << "deposits:" << getNbDeposits() << ";"
              << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
              << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
              << ";withdrawal:"<< std::flush;
    if (withdrawal > _amount) {
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << std::flush;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;
    return true;
}

int Account::checkAmount(void) const { return _amount; }

void Account::displayStatus(void) const {
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
              << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp(){
    std::time_t result = std::time(NULL);

    std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&result)->tm_year
                << std::setw(2) << 1 + std::localtime(&result)->tm_mon
                <<  std::setw(2) << std::localtime(&result)->tm_mday
                <<  "_"
                <<  std::setw(2) << std::localtime(&result)->tm_hour
                <<  std::setw(2) << std::localtime(&result)->tm_min
                <<  std::setw(2) << std::localtime(&result)->tm_sec 
                << "] " << std::flush;
}
