/* GuessTheNumber.cpp : 
   Nicholas Willard
   05/31/15
   Week 8
   --------------------------------------------------------------------
 */

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector <int> numbers;
	vector <string> operator1;
	int randomNumber;

	operator1.push_back("+");
	operator1.push_back("-");
	operator1.push_back("*");
	operator1.push_back("/");

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(operator1.begin(), operator1.end());
	const string THE_OPERATOR1 = operator1[0];
	
	cout << operator1[0] << endl;
	cout << operator1[1] << endl;
	cout << operator1[2] << endl;
	cout << operator1[3] << endl;

	for(int i = 0; i < 2; i++) {
		randomNumber = rand() % 100 + 1;
		numbers.push_back(randomNumber);
	}

	for(vector<int>::const_iterator i = numbers.begin(); i != numbers.end(); ++i) {
		cout << *i << " ";
	}

	system("pause");
	return 0;
}

int askNumber() {
	int number;
	cout << "Please Enter a number from 1-10: ";
	cin >> number;
	return number;
}
