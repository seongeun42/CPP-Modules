/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongele <seongele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:51:29 by seongele          #+#    #+#             */
/*   Updated: 2022/05/18 15:51:29 by seongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created\n";
}

Account::Account(void) : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed\n";
}

int		Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << "\n";
}

void	Account::makeDeposit(int deposit)
{
	int	pre_amount = this->_amount;

	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << pre_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();

	if (this->_amount < withdrawal)
	{
		std::cout
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:refused\n";
		return false;
	}

	int	pre_amount = this->_amount;

	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;

	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << pre_amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
	return true;
}

int		Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::_displayTimestamp(void)
{
	time_t	current = std::time(NULL);
	struct tm now;
	localtime_r(&current, &now);

	std::cout << "[" << now.tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << now.tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << now.tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << now.tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << now.tm_min;
	std::cout << std::setfill('0') << std::setw(2) << now.tm_sec << "] ";
}