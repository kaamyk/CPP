/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/19 12:35:50 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Epee rouillee"), m_degatsArme(10)
//			CONSTRUCTORS

//	DEFAULT CONTSTRUCTOR
Account::Account(void) : _accountIndex(_nbAccounts),
						_amount(0),
						_nbDeposits(0),
						_nbWithdrawals(0)
{
	++Account::_nbAccounts;
}

//	CONSTRUCTOR
Account::Account(int initial_deposit) :	_accountIndex(_nbAccounts),
												_amount(initial_deposit),
												_nbDeposits(0),
												_nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex <<
	";amount:" << Account::_amount <<
	";created" << std::endl;
	++_nbAccounts;
	_totalAmount += _amount;
}

//			DESTRUCTOR
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex <<
	";amount:" << Account::_amount <<
	";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	// std::cout << "\n\n";
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts <<
	";total:" << Account::_totalAmount <<
	";deposits:" << Account::_totalNbDeposits <<
	";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex
	<< ";amount:" << Account::_amount
	<< ";deposits:" << Account::_nbDeposits 
	<< ";withdrawals:" << Account::_nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);
	tm		*ltm = localtime(&now);

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	if (ltm->tm_mon < 10)
		std::cout << "0";
	std::cout << ltm->tm_mon;
	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout << ltm->tm_mday
	<< "_";
	if (ltm->tm_hour < 10)
		std::cout << "0";
	std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0";
	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0";
	std::cout << ltm->tm_sec <<
	"] ";
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex
	<< ";p_amount:" << Account::_amount
	<< ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	std::cout << ";amount:" << Account::_amount 
	<< ";nb_deposits:" << Account::_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int	withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex
	<< ";p_amount:" << Account::_amount
	<< ";withdrawal:";
	if (_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (1);
	}
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	std::cout << ";amount:" << Account::_amount 
	<< ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
	return (0);
}

int		Account::checkAmount(void) const
{
	return (0);
}
