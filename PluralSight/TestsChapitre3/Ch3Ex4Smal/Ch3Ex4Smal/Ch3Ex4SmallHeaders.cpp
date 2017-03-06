#include <iostream>

#include "Ch3Ex4FunctionsHeaders.h "  

int main()
{
	auto a = add(3, 4);
	cout << " 3 + 4 , Is , : , : " << a;
	double b = add(1.2, 3.4);
	cout << endl;
	cout << " 1.2 + 3.4 , Is , : , : " << b;
	cout << endl;
	auto c = add(1.1, 2.2, 3.3);
	cout << " 1.1 + 2.2 + 3.3 , Is , : , : " << c;
	cout << endl;


	add(0, 0);
	add(0, 0, 0);

	if (test(true))
	{
		cout << " True Passes The Test " << endl;
	}

	if (test(3.2))
	{
		cout << " 3.2 Passes The Test " << endl;
	}









	///Pausing The Prompt Consol From Auto Finish / \ \ / \\ / \ \ From Auto Finishing And Closing / \ \ / \\ / \ \ And After Closing 
	system("pause");


	return 0;
}