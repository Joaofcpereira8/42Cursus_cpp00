/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:22:30 by jofilipe          #+#    #+#             */
/*   Updated: 2024/07/10 15:22:32 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0; //static
int Account::_totalAmount = 0; //static
int Account::_totalNbDeposits = 0; //static
int Account::_totalNbWithdrawals = 0; //static

int	Account::getNbAccounts() {
	return _nbAccounts;
}

int	Account::getTotalAmount() {
	return _totalAmount;
}

int Account::getNbDeposits() {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

int	Account::checkAmount() const {
	return _amount;
}

Account::Account(void) {
	(void) _accountIndex;
}

Account::~Account() {
	static int i = 0;
	_displayTimestamp();
	std::cout << " index:" << i++;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

Account::Account(int initial_deposit) {
	_displayTimestamp();

	_amount += initial_deposit;
	std::cout << " index:" << getNbAccounts();
	std::cout << ";amount:" << checkAmount;
	std::cout << ";created" << std::endl;

	_nbAccounts++;
	_totalAmount += initial_deposit;
}

//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus(void) const {
	static int i = 0;
	_displayTimestamp();
	std::cout << " index:" << i++;
	std::cout << ";amount:" << checkAmount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
	if (i > 7)
		i = 0;
}

//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::_displayTimestamp() {
	std::time_t t = std::time(NULL);
	std::tm* now = std::localtime(&t);

	std::cout << "[";
	std::cout << (now->tm_year + 1900);
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1);
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_sec;
	std::cout << "]";
}

//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit(int deposit) {
	static int i = 0;
	_displayTimestamp();
	std::cout << " index:" << i;
	std::cout << ";p_amount:" << checkAmount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << checkAmount;
	std::cout << ";nb_deposits:" << ++_nbDeposits;
	std::cout << std::endl;

	_totalAmount += deposit;
	_totalNbDeposits++;
	i++;
}

//[19920104_091532] index:0;p_amount:47;withdrawal:refused
//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal(int withdrawal) {
	static int i = 0;
	int total = _amount - withdrawal;
	_displayTimestamp();
	std::cout << " index:" << i++;
	std::cout << ";p_amount:" << checkAmount;
	if (total < 0) {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else {
		_amount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << checkAmount;
		std::cout << ";nb_withdrawals:" << ++_nbWithdrawals;
		std::cout << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
}
