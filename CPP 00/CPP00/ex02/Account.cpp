/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:02:14 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/06 00:08:39 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccount = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccount);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccount;
	_nbAccount++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl; 
}

Account::~Account(void)
{
	_displayTimestamp();

	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl; 
	
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() <<	std::endl; 

	std::cout << std::endl;

}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	
	_amount += deposit;
	_totalAmount += deposit;

	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;

	_nbDeposits += 1;
	_totalNbDeposits +=1;

	std::cout << ";nb_deposits:" << _nbDeposits << std::endl; 
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
	
	if (_accountIndex == _nbAccount - 1)
		std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();

	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";

	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}

	_amount 			-= withdrawal;
	_nbWithdrawals 		+= 1;
	_totalNbWithdrawals += 1;

	std::cout << withdrawal;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;

	return (true);
}

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900)
              << (now->tm_mon + 1)
              << now->tm_mday << "_"
              << now->tm_hour
              << now->tm_min
              << now->tm_sec << "]";
}