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

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	static int i = 0;
	_displayTimestamp();
	_accountIndex = i;
	_amount = initial_deposit;
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;

	_nbAccounts += 1;
	i++;
}

Account::Account(void) {}

Account::~Account() {}

//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const {
	int	i = 0;
	_displayTimestamp();
	std::cout << " index:" << i;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << &getNbDeposits;
}
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << " accounts:" << &getNbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp() {
	std::time_t t = std::time(NULL);
	std::tm* now = std::localtime(&t);

	std::cout << "[" << now->tm_year + 1900;
	std::cout << now->tm_mon + 1;
	std::cout << now->tm_mday;
	std::cout << "_";
	std::cout << now->tm_hour;
	std::cout << now->tm_min;
	std::cout << now->tm_sec << "]";
}

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
	return getTotalAmount();
}

void	Account::makeDeposit(int deposit) {
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_totalAmount -= withdrawal;
	if (_totalAmount < 0)
		return false;
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals +=1;
		return true;
	}
}
