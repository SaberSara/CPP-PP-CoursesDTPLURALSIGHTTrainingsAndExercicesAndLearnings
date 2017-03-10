#include "Ch7Ex3Account.h"


#include <iostream> 

using namespace std;

void tryToChangeTransaction(Transaction t)
{
	t.DoubleAmount();
	return ;
}

void changeTransaction( /* const */ Transaction& t)
{
	t.DoubleAmount();
	return; 
}


int main()
{




	Transaction deposit(50, "Deposit : ");
	cout << " Original : " << deposit.Report() << endl;
	tryToChangeTransaction(deposit);
	cout << " After Pass By Value : " << deposit.Report() << endl;
	changeTransaction(deposit);
	cout << " After Pass By Reference : " << deposit.Report() << endl;








	///Pausing The Prompt Consol From Auto Finish / \ \ / \\ / \ \ From Auto Finishing And Closing / \ \ / \\ / \ \ And After Closing 
	system("pause");



	return 0;
}