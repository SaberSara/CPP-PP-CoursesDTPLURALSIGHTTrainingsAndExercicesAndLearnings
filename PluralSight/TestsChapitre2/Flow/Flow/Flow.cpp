#include <iostream>

using namespace std;

int main()
{
	int i;
	int j;
	cout << " Enter A Number : ";
	cin >> i; 
	cout << " You Entered : " << i << " . Enter Another Number : "; 
	cin >> j;   

	if (i < j)
	{
		cout << " The First Number , Is , : " << i << " , Is Less Than The Second Number , : " << j << endl ;     
	}

	else
	{
		cout << " The First Number , Is : " << i << ", Is Not Less Than The Second Number , : " << j << endl   ;
	}

	if (i == j)
	{
		cout << " The First Number , Is : " << i << ", Is Equal To The Second Number , : " << j << endl ; 

	}
	if (i > j)
	{
		cout << " The First Number , Is : " << i << ", Is Greather Than The Second Number , : " << j << endl ;
	}

	system("pause");
}