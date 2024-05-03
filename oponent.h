#include <iostream>
#include <string>
#include <vector>
#ifndef OPONENT_H
#define OPONENT_H
#include "player.h" //maybe?
#include <cstdlib>
#include <ctime>		 

class Oponent{

	private:

	 vector <int> oponentDiceValues; 

	public:

	 Oponent (const vector <int>& OponentDiceValues):oponentDiceValues(OponentDiceValues ) {}

	//functions available for oponent	 
	
	 vector <int> getOponentDiceValues();

	 int sumVector(vector<int>& oponentDiceValues);


};

#endif
