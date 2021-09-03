#include "Account.hpp"
#include "iostream"
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// [19920104_091532] index:0;amount:42;created

Account::Account(int initial_deposit)
{
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;

	std::cout << "index: " << this->_accountIndex << "amount:" << _amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	
}