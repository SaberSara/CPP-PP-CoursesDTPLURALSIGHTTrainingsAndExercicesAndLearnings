



using namespace std; 


Account::Account(void /*Or Leave Empty / \ \ Nothing / \ \ Leave Empty */) ::Report()
{

}

vector<string> Account::Report()
{
	vector <string> report; 
	report.push_back(" Balance Is : " + to_string());
	report.push_back("Transactions : "); 
	for (auto t : log)
	{
		report.push_back(t.report());
	}
	report.push_back(" - - - - - - - - - - "); 

	return report;
}