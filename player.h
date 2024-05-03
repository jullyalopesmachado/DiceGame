#include <iostream>
#include <string>
#include <vector>
#ifndef PLAYER_H
#define PLAYER_H
#include <cstdlib>
#include <ctime>
using namespace std;

class Player{

	private:

	string name;
	vector <int> diceValues;

	public:

	Player (string Name, const vector <int>&  DiceValues): name (Name), diceValues (DiceValues) {}

	 vector <int> getDiceValues();
	
	 string getPlayerName();
	
	//vector <int> PlayerDiceSum(const vector<int>& diceValues);

 
	 int sumVector(vector<int>& diceValues);

};

#endif





