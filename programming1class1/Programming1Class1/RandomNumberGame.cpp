/* File Name example.cpp : 
   Nicholas Willard
   Enter Date Here
   Chapter and Assignment Name
   --------------------------------------------------------------------
 */

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned int guess;
	unsigned int tries;

	cout << "\tThe Classic Number Guessing Game\n\n" << endl;
	cout << "Enter a number between 1 through 100 to try and guess my number." << endl;
	cin >> guess;
	++tries;

	

	system("pause");
	return 0;
}

