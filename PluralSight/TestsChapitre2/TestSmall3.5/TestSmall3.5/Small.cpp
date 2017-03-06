#include <iostream>
using namespace std;

int main()
{
	cout << "Hello !" << endl << 2 + 2;
	cout << endl << endl;
	// [ The ] Fractional Part Will Be Lost
	int i1;
	i1 = 4.9;
	cout << i1 << endl;

	auto j1 = 5;
	cout << j1 << endl;

	auto f1 = 4.5;
	j1 = f1;
	cout << f1 << endl;


	int i;
	i = 3;
	cout << i << endl;

	int j = 2;
	cout << j << endl;

	float f = 4.9;
	cout << f << endl;
	f = 9.0 / 5;
	cout << f << endl;

	/*i = "hello";
	f = 1.0 / "hello";*/
	system("pause");

	//int k;

	//cin >> k;
	return 0;
}