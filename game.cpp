#include <iostream>
#include <string>
#include "game.h"
#include "oponent.h"
#include "player.h"
#include <vector>
#include <numeric>

using namespace std;

	
	string Game::winLose(int PlayerTotalDice, int OponentTotalDice){

	if (PlayerTotalDice > OponentTotalDice){

	cout << "You won this round! " << endl;

	return "You are the winner!" ;

	} else if (OponentTotalDice > PlayerTotalDice){


	 cout << "Opponent won this round. Try again later. " << endl;
	
	} else if (PlayerTotalDice == OponentTotalDice){

	  cout << "It is a tie! " << endl;

	  return "No winner.";
	}
	
	return "Thanks for playing :) ";
	} 
