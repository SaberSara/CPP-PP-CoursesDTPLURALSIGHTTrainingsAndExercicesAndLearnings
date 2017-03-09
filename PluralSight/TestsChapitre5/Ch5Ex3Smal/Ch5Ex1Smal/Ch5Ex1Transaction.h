#pragma once













#include <string>


class Transaction
{
private :
	int amount; 
	std::string type; // A Better Way Exists 
public:
	Transaction(int amt, std::string kind);
	std::string Report();
};