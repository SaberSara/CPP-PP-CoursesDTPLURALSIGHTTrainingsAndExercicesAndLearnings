






#include<iostream>
#include"Ch5Ex1Account.h"



using namespace std; 

int main()
{
	Account al; 
	al.Deposit(90);
	cout << " After Depositiing $90 " << endl; 
	for (auto s : al.Report())
	{
		cout << s << endl;
	}
	al.withdraw(50);
	if (al.withdraw(100))
	{
		cout << " Second Withdraw succeeds " << endl; 
	}
	cout << " After Withdrawig $50 Then $100 " << endl;
	for (auto s : al.Report())
	{
		cout << s << endl; 
	}


	///Pausing The Prompt Consol From Auto Finish / \ \ / \\ / \ \ From Auto Finishing And Closing / \ \ / \\ / \ \ And After Closing 
	system("pause");






	return 0; 
}