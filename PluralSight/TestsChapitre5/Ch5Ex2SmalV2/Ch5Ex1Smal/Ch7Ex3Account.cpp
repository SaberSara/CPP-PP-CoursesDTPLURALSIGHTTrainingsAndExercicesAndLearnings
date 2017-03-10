

#include "Ch7Ex3Account.h"

using namespace std; 


Account::Account(void /*Or Leave Empty / \ \ Nothing / \ \ Leave Empty */) : balance(0)
{

}

vector<string> Account::Report() const 
{
	vector <string> report; 
	report.push_back(" Balance Is : " + to_string ( balance ) );
	report.push_back(" Transactions : "); 
	for (auto t : log)
	{
		report.push_back(t.Report());
	}
	report.push_back(" - - - - - - - - - - "); 

	return report;
}

bool Account::Deposit(int amt) /*const */
{
	if (amt >= 0)
	{
		balance += amt;
		log.push_back(Transaction(amt, "     Deposit "));
		return true;
	}
	else
	{
		return false;
	}
}

bool Account::withdraw(int amt)
{
	if (amt >= 0)
	{
		if (balance >= amt)
		{
			balance -= amt; 
			log.push_back(Transaction(amt, " WithDraw ")); 
			return true; 
		}
		else
		{
			return false; 
		}
	}
	else
	{
		return false;
	}
}

//int Account :: GetBalance ()
//{
//	return balance; 
//}