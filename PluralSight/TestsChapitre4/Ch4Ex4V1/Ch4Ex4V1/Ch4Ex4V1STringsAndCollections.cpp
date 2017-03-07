#include <iostream>

#include<string>

using namespace std;

int main()
{

	int choice = 1;
	int guess;
	while (choice == 1)
	{
		string word1;
		string word2;
		cout << " Input Word 1 : " << endl;
		cin >> word1;
		//getline(cin, word1);







		cout << " Input Word 2 : " << endl;
		cin >> word2;
		//getline(cin, word2);
		cout << endl;

		if (word1.length() > word2.length())
		{
			cout << " The Word 1 : " << word1 << " Is More Lenght / \ \ Is Longuer Than The Number 2 : " << word2 << endl;
		}
		if (word1.length() < word2.length())
		{
			cout << " The Word 1 : " << word1 << " Is Less Length / \ \ Is Shorter Than The Number 2 : " << word2 << endl;
		}
		if (word1.length() == word2.length())
		{
			cout << " The Word 1 : " << word1 << " Is The Same / \ \ Is Equal / \ \ Is The Same Length / \ \ Is Equivalent / \ \ Is Equivalent / \ \ In / \ \ At / \ \ On / \ \ Into / \ \ On Length Then The Number 2 : " << word2 << endl;
		}
		do {
			cout << " Would You Like To Continue ? Any Buttons For Yes \ Any Buttons 1 For Yes \ 1 Any Buttons For Yes \ Any Buttons For Yes 1 \ 1 Any Buttons For Yes \ 1 For Yes \ 0 For No : " << endl;
			cin >> choice;
		} while (choice != 1 && choice != 0);
	}




	///Pausing The Prompt Consol From Auto Finish / \ \ / \\ / \ \ From Auto Finishing And Closing / \ \ / \\ / \ \ And After Closing 
	system("pause");


	return 0;
}