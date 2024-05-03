#include <iostream>
#include <numeric>
#include <string>
#include "player.h"
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
	
using namespace std;
	
	string Player::getPlayerName(){
	
		return name;
	}

	vector <int> Player::getDiceValues(){

	 srand(time(0));

        vector <int> diceValues;

        int N = 4;

        for (int i = 0; i < 4; i++){

      int randomVal = (rand() % N) + 1; // generating random number between 1 and 6.
        diceValues.push_back(randomVal); // adds val to vector;

        }

        cout << "Your have successfully rolled your four dice. The values drawn are: ";

        for (int value : diceValues){

        cout << value << " ";
        }

        cout << endl;
        
	return diceValues; //return vector with dice values

	}	

	int Player::sumVector(vector<int>& diceValues) {
   		 
		int sum = 0;
   	
	 for (int value : diceValues) {
		
	 	 sum += value;
    }

	cout << sum << endl;	 
    return sum;
}



         
 




