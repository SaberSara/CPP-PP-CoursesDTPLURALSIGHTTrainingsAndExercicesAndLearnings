#include<iostream>

#include<string>

#include<vector>




#include<algorithm> // For Sort And Count 



using namespace std; 





int main()
{
	vector<int> vi;
	for (int i = 0; i < 10; i++)
	{
		vi.push_back(i);
	}

	for (auto item : vi)
	{
		cout << item << " ";
	}
	cout << endl; 

	vector<string> vs; 

	cout << " Enter Three Words : "; 
	for (int i = 0; i < 3; i++)
	{
		string s; 
		cin >> s; 
		vs.push_back(s);
	}

	for (auto item : vs)
	{
		cout << item << " "; 
	}
	cout << endl; 

	cout << " Int VI Vector VI Has : " << vi.size() << " Elements " << endl ; 

	vi[5] = 3;
	vi[6] = -1; 
	vi[1] = 99; 

	for (auto item : vi)
	{
		cout << item << " ";
	}
	cout << endl; 

	for (unsigned int i = 0; i < vi.size(); i++)
	{
		cout << vi[i] << " "; 
	}
	cout << endl; 

	for (auto i = begin(vi); i != end(vi); i++)
	{
		cout << *i << " "; 
	}
	cout << endl; 

	sort(begin(vs), end(vs));
	for (auto item : vs)
	{
		cout << item << " "; 
	}
	cout << endl; 

	int threes = count(begin(vi), end(vi), 3);
	cout << " Vector Of IntSss Has : " << threes << " Elements . . . . . " << endl; 

	int tees = count(begin(vs[0]), end(vs[0]), 't');
	{
		cout << " First Word Has : " << tees << " Letter T ' s . . . . . " << endl; 
	}






	///Pausing The Prompt Consol From Auto Finish / \ \ / \\ / \ \ From Auto Finishing And Closing / \ \ / \\ / \ \ And After Closing 
	system("pause");

	return 0; 
}