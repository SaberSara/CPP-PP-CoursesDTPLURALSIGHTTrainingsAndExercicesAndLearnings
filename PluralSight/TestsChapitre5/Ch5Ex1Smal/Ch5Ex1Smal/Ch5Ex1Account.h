#pragma once



#include <vector>
#include <string>
#include "Ch5Ex1Transaction.h"

class Account
{
private : 
	int balance; 
	std::vector<Transaction> log; 
public : 
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool withdraw(int amt);
};
