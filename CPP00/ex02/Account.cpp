/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:39:16 by anvincen          #+#    #+#             */
/*   Updated: 2023/09/05 12:18:14 by antoine          ###   ########.fr       */
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
	++_nbAccounts;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex <<
	";amount:" << Account::_amount <<
	";created" << std::endl;

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
	return ;
}

void	Account::makeDeposit(int deposit)
{
	(void) deposit;
	return ;
}

bool	Account::makeWithdrawal(int	withdrawal)
{
	(void) withdrawal;
	return (0);
}

int		Account::checkAmount(void) const
{
	return (0);
}

void	Account::displayStatus(void) const
{
	return ;
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);
	tm		*ltm = localtime(&now);

	std::cout << "[" <<
	ltm->tm_year <<
	ltm->tm_mon <<
	ltm->tm_mday <<
	"_" <<
	ltm->tm_hour <<
	ltm->tm_min <<
	ltm->tm_sec <<
	"] ";
}
