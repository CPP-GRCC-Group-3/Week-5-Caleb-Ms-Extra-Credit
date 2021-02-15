#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Fortune {
private:

	vector<string> fortuneVector;

public:

	void ZoinksCheck(string&);
	string GetSign(int&, int&);
	void InsertIntoFile();
	void CreateVector();
	string getHoroscope(int&, int&, int&);
	
	Fortune();
	~Fortune();
};