#include <iostream>












#include <string>

using namespace std; 

int main()
{
	string name; 
	cout << "who are you ? "; 
	cin >> name;
	string greeting = " Hello , " + name; 
	if (name == " Kurai ")
	{
		greeting += " , I Know You ! ";
	}
	cout << greeting << endl;

	return 0;
}