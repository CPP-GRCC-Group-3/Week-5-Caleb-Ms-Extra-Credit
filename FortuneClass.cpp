#include "Header.h"
#include <string>
#include <iostream>

using namespace std;

void Fortune::ZoinksCheck(string& toCheck) {
	if (toCheck == "ZOINKS") {
		exit(0);
	}
}

string Fortune::GetSign(int& month, int& day) {
	switch (month) {
	
	case 1:
		if (day > 0 && day < 20) {
			return "Capricorn";
		}
		else if (day >= 20 && day <= 31) {
			return "Aquarius";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 2:
		if (day > 0 && day < 19) {
			return "Aquarius";
		}
		else if (day >= 19 && day <= 29) {
			return "Pisces";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 3:
		if (day > 0 && day < 21) {
			return "Pisces";
		}
		else if (day >= 21 && day <= 31) {
			return "Aries";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 4:
		if (day > 0 && day < 20) {
			return "Aries";
		}
		else if (day >= 20 && day <= 30) {
			return "Taurus";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 5:
		if (day > 0 && day < 21) {
			return "Taurus";
		}
		else if (day >= 21 && day <= 31) {
			return "Gemini";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 6:
		if (day > 0 && day < 21) {
			return "Gemini";
		}
		else if (day >= 21 && day <= 30) {
			return "Cancer";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 7:
		if (day > 0 && day < 23) {
			return "Cancer";
		}
		else if (day >= 23 && day <= 31) {
			return "Leo";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 8:
		if (day > 0 && day < 23) {
			return "Leo";
		}
		else if (day >= 23 && day <= 31) {
			return "Virgo";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 9:
		if (day > 0 && day < 23) {
			return "Virgo";
		}
		else if (day >= 23 && day <= 30) {
			return "Libra";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 10:
		if (day > 0 && day < 23) {
			return "Libra";
		}
		else if (day >= 23 && day <= 31) {
			return "Scorpio";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 11:
		if (day > 0 && day < 22) {
			return "Scorpio";
		}
		else if (day >= 22 && day <= 30) {
			return "Sagittarius";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	case 12:
		if (day > 0 && day < 22) {
			return "Sagittarius";
		}
		else if (day >= 22 && day <= 31) {
			return "Capricorn";
		}
		else {

			return "LiesAboutBirthday";
			break;
		}

	default:
		return "LiesAboutBirthday";
		break;
	}
}

void Fortune::InsertIntoFile() {
	string horoscopeInput;
	cout << "\n\nType a horoscope to add: ";
	cin >> horoscopeInput;
	
	string line;
	ofstream myFile("file.txt", ios::app);
	
	myFile << endl << horoscopeInput;

	myFile.close();

	fortuneVector = {};
	CreateVector();

}

void Fortune::CreateVector() {
	string line;
	ifstream myFile;

	myFile.open("file.txt");

	//Get all lines in file and add them to a vector
	if (myFile.is_open()) {
		while (getline(myFile, line)) {
			fortuneVector.push_back(line);
		}

		myFile.close();
	}
}

string Fortune::getHoroscope(int& a, int& b, int& c) {
	srand(a * b * c);

	return fortuneVector[rand() % fortuneVector.size()];
}

Fortune::Fortune() {
	CreateVector();
}

Fortune::~Fortune() {

}