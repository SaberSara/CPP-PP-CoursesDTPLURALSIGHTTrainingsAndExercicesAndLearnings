#include <iostream>












#include <string>

using namespace std;

int main()
{
	string name;
	cout << "who are you ? ";
	
	cout << endl; 

	cin >> name;
	string greeting = "Hello, " + name;
	if (name == "Kurai")
	{
		greeting += ", I Know You ! ";
	}
	cout << greeting << endl;

	int l = greeting.length();
	cout << "\"" + greeting + "\" is " << l << " characters long " << endl;
	auto space = greeting.find(' ');
	string beginning = greeting.substr(space+1);
	cout << beginning << endl;; 
	if (beginning == name)
	{
		cout << " expected result . " << endl; 

	}






	///Pausing The Prompt Consol From Auto Finish / \ \ / \\ / \ \ From Auto Finishing And Closing / \ \ / \\ / \ \ And After Closing 
	system("pause");


	return 0;
}