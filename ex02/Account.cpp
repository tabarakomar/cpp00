/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabarak <tabarak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:43:09 by talshoub          #+#    #+#             */
/*   Updated: 2026/06/30 19:09:48 by tabarak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
int Account::_nbAccounts=0;
int Account::_totalAmount=0;
int Account::_totalNbDeposits=0;
int Account::_totalNbWithdrawals=0;

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
}

void Account::_displayTimestamp( void )
{
    char buffer[1024];
    time_t timeRightNow=time(NULL);
    tm *timeLocaly=localtime(&timeRightNow);
    strftime(buffer,1024,"%Y%m%d_%H%M%S",timeLocaly);
    std::cout<<"[";
    std::cout<<buffer;
    std::cout<<"] ";    
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    //[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
    std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";deposit:"<<deposit<<";amount:"<<_amount+deposit<<";nb_deposits:"<<_nbDeposits+1<<std::endl;
    _amount+=deposit;
    _nbDeposits++;
    _totalAmount+=deposit;
    _totalNbDeposits++;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    //19920104_091532] index:5;p_amount:23;withdrawal:refused
    // [19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
    _displayTimestamp();
    if(_amount<withdrawal)
    {
        std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:refused"<<std::endl;
        return false;
    }
    else
    {
        std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal<<";amount:"<<_amount-withdrawal<<";nb_withdrawals:"<<_nbWithdrawals+1<<std::endl;
        _amount-=withdrawal;
        _nbWithdrawals++;
        _totalAmount-=withdrawal;
        _totalNbWithdrawals++;
        return true;
    }
    return false;
}

int Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}


int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout<<"accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}
Account::~Account()
{
_displayTimestamp();
std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}
