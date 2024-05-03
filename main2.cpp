#include <iostream>
#include <vector>
#include <string>
#include "player.h"
#include "oponent.h"
#include "game.h"
using namespace std;


int main(){

        string name;
        
        vector <int> diceValues;
	
	cout << "Welcome to the biggest dice game!" << endl;

        cout << "Input your name: ";
        cin >> name;

        Player player1 (name, diceValues );

        string PlayerName = player1.getPlayerName();

        cout << "So your name is " << PlayerName << endl;

    //dice vals
	char key;
        cout << "Let's roll the dice! Enter any key to continue :) " << endl;
	cin >> key;

        vector <int>  PlayerDiceVals = player1.getDiceValues();

      //  cout << "You have drawn your dice.";

        for (int value : PlayerDiceVals){

        cout << value << " " ;

        }

            cout << endl;

	 cout << "***** Now that you have your dice numbers, enter any key if you want to continue ***** " << endl;
         cin >> key;

	 vector <int> oponentDiceValues;

        Oponent oponent1 (oponentDiceValues) ; //i capitalized o in (Oponent...)

       // vector <int> oponentDiceVals = oponent1.getOponentDiceValues();

          vector <int> CompOppDiceVals = oponent1.getOponentDiceValues();
	//cout << "Oponent's dice: ";

        for (int val : CompOppDiceVals){

        cout << val << " " ;

        }

        cout << endl;
	
	cout << "Player total dice amount is: " << endl;
	
	int PlayerTotalDice = player1.sumVector( PlayerDiceVals);
	
        cout << "The opponent's total dice amount is: " << endl;

	int OponentTotalDice = oponent1.sumVector (CompOppDiceVals);


	Game game1 (PlayerTotalDice, OponentTotalDice);

	string gameResult = game1.winLose(PlayerTotalDice, OponentTotalDice );

	cout << "The result is... " << gameResult << endl;

        return 0;
} 
