/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:43:09 by talshoub          #+#    #+#             */
/*   Updated: 2026/06/29 18:58:40 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount <<":created"<<<< std::endl;
}

int Account:: 	getNbAccounts( void )
{
    return _nbAccounts;
}

int Account::getTotalAmount( void )
{
    return _totalAmount;
}

int Account::getNbDeposits( void )
{
    return _nbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return _nbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "p_amount:" << _amount << ";deposit:" << deposit<<":amount:"<<_amount + deposit<<";nb_deposits:"<<_nbDeposits + 1<<std::endl;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
}
    

void Account::displayAccountsInfos( void )
{
    std::cout<< "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if(_amount<withdrawal)
    {
        std::cout<<"withdrawal:refused"<<std::endl;
        return false;
    }
    else
    {
        
    }
}

Account::~Account( void );
{
    _displayTimestamp();
    std::cout<<"index"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;;
    _nbaccounts--;
}





