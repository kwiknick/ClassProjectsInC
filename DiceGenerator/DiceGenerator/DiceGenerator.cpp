/* DiceGenerator.cpp : 
Nicholas Willard
05/10/15
Week 5 Dice Generator Program
--------------------------------------------------------------------
*/

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int players = 0;
	int dice[5];
	char reroll[5];

	cout << "Please enter the number of players: ";
	cin >> players;
	int playerCount = 1;

	for (int i = 0; i < players; i++) {
		
		cout << "\n\n\nPlayer " << playerCount << " turn.\n";
		
		int rollNumber = 1;

		dice[0] = rand() % 6 + 1;
		dice[1] = rand() % 6 + 1;
		dice[2] = rand() % 6 + 1;
		dice[3] = rand() % 6 + 1;
		dice[4] = rand() % 6 + 1;

		while (rollNumber<=3) {

			cout << "Roll number " << rollNumber << " is: \nDie #1 " << dice[0] << "\nDie #2 " << dice[1] << "\nDie #3 " << dice[2] << "\nDie #4 " << dice[3] << "\nDie #5 " << dice[4];
			if(rollNumber != 3) {
				cout  << "\nType 'y' to re-roll or 'n' to stay next to the corresponding dice:\n";
				cout << "ReRoll Die #1?(y/n) ";
				cin >> reroll[0];
				cout << "ReRoll Die #2?(y/n) ";
				cin >> reroll[1];
				cout << "ReRoll Die #3?(y/n) ";
				cin >> reroll[2];
				cout << "ReRoll Die #4?(y/n) ";
				cin >> reroll[3];
				cout << "ReRoll Die #5?(y/n) ";
				cin >> reroll[4];
			}

			if (reroll[0] == 'y'){
				dice[0]=rand() % 6+1;}

			if (reroll[1] == 'y'){
				dice[1]=rand() % 6+1;}

			if (reroll[2] == 'y'){
				dice[2]=rand() % 6+1;}

			if (reroll[3] == 'y'){
				dice[3]=rand() % 6+1;}

			if (reroll[4] == 'y'){
				dice[4]=rand() % 6+1;}

			rollNumber++;
			
			if (rollNumber == 3) {
				playerCount++;
			}
		}
	}
	system("pause");
	return 0;

}