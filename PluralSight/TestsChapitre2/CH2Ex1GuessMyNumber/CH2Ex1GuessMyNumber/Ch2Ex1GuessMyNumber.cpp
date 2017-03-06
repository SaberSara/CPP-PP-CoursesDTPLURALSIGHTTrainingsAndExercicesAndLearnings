#include <iostream>

using namespace std; 


int main()
{
	int answer = 7 ;
	int guess;
	int choice = 1 ; 
	while (choice == 1)
	{
		bool notguessed = false;
		while (notguessed == true)
		{
			cout << " Enter A Number To Guess : " << endl;
			cin >> guess;
			if (guess < answer)
			{
				cout << " Too Small ! Try Bigger One Or A Little Bigger One ! " << endl;
				notguessed = true;
			}
			if (guess > answer)
			{
				cout << " Too High ! Try Smaller One Or A Little Smaller One ! " << endl;
				notguessed = true;
			}
			if (guess == answer)
			{
				cout << " Hourra ! Hey !! Haha! Cool ! Congrat ! Congrats ! Congratulation ! Congratulations ! " << endl;
				notguessed = false;
			}
		}
		do {
			cout << " Would You Like To Continue ? Any Buttons For Yes \ Any Buttons 1 For Yes \ 1 Any Buttons For Yes \ Any Buttons For Yes 1 \ 1 Any Buttons For Yes \ 1 For Yes \ 0 For No : " << endl;
			cin >> choice;
		} while (choice != 1 && choice != 0);
		
		
	}

	system("pause");
}