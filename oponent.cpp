#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include "oponent.h"
#include <cstdlib>
#include <ctime>
	vector <int> Oponent::getOponentDiceValues(){
		
	rand();

	 vector <int> OppDiceValues;
        int M = 4;

        for (int i = 0; i < 4; i++){

	int oponentRandomVal = (rand() % M) + 1; 
	
	// generating random number between 1 and 6.
      
       OppDiceValues.push_back(oponentRandomVal); // adds val to vector;

        }

        cout << "Opponent's dice: ";

        for (int value : OppDiceValues){

        cout << value << " ";
        }

        cout << endl;

	return OppDiceValues; //return vector with dice values

	}
        
	int Oponent::sumVector(vector<int>& OppDiceValues) {

          int sum = 0;

         for (int value : OppDiceValues) {

                 sum += value;
    }

        cout << sum << endl;

    return sum;

}





