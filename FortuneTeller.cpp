/*
* Caleb McGraw
* CIS 227
* Test File
* 2/14/21
*
* Purpose: Test functions for other programs
*/

//Includes
#include <iostream>
#include "Header.h"
#include <string>

//Namespaces
using namespace std;

//Globals

//Function Declaration

//Function Definition


int main()
{
	Fortune fortune;

	string userName;
	int birthMonth;
	int birthDay;
	int favoriteNumber;
	string astrologicalSign;
	char firstInitial;
	string horoscopeInput;

	while (true) {

		//get username
		cout << "What is your name: ";
		cin >> userName;

		//if username is Admin
		if (userName == "Admin") {
			fortune.InsertIntoFile();
			userName = "Testing";
		}

		//ZOINKS check
		fortune.ZoinksCheck(userName);

		//get bDay
		cout << "\nBirth Month (as digit): ";
		cin >> birthMonth;

		cout << "\nBirth Day (as digit(s)): ";
		cin >> birthDay;

		//get favorite number
		cout << "\nFavorite Number: ";
		cin >> favoriteNumber;

		//function calls & manipulations
		astrologicalSign = fortune.GetSign(birthMonth, birthDay);
		firstInitial = userName.at(0);

		//output sign
		cout << "\n\nYour sign: " + astrologicalSign;

		//output fortune
		cout << "\n" << firstInitial << ", as a(n) " << astrologicalSign << ": " << fortune.getHoroscope(birthMonth, birthDay, favoriteNumber) << "\n\n\n";
	
	}
}
