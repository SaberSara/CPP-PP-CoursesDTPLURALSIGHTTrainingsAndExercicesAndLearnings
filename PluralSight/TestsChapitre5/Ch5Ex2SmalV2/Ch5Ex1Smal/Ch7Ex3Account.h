#pragma once



#include <vector>
#include <string>
#include "Ch7Ex3Transaction.h"

class Account
{
private : 
	int balance; 
	std::vector<Transaction> log; 
public : 
	Account();
	std::vector<std::string> Report() const ;
	bool Deposit(int amt)    ; /* const */ /* Can ' T Be Constant In Correcpondance Of The Exercice , Acoording And Relatin And According And Relating To The Exercise */    ;
	bool withdraw(int amt)  ;
	int GetBalance() const { return balance;  };
};
