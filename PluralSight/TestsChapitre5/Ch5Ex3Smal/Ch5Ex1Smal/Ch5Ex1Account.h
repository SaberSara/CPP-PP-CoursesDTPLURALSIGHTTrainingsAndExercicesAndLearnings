#pragma once



#include <vector>
#include <string>
#include "Ch5Ex1Transaction.h"

class Account
{

	///1 Step / 1rst Step 
//public : 
//	int balance;
	///
private : 
	int balance; 
	std::vector<Transaction> log;
	///2 Step Mini Part Exercicscsce / 2nd Step Mini Part Exercicscsce :
	int limit; 
	///
public : 
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool withdraw(int amt);
	int GetBalance() { return balance;  };
};
