#include <iostream>

using namespace std;

double add(double x, double y)
{
	return x + y; 
}

int main()
{
	auto a = add(3, 4);
	cout << " 3 + 4 , Is , = , = = , == , = = , = , : " << a << endl ;

	double b = add(1.2, 3.4);
	cout << " 1.2 + 3.4 , Is , = , = = , == , = = , = , : " << b << endl;

	///Pausing The Prompt Consol From Auto Finish / \ \ / \\ / \ \ From Auto Finishing And Closing / \ \ / \\ / \ \ And After Closing 
	system("pause");
	return 0;

	
}

