#include "dice.h"
#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <string>
using namespace std;
dice::dice()
{
	
}
//set the top of the dice
void dice::setDiceTop(string top)
{
	topOfDice = top;
}
//set the status of the dice
void dice::setStatus(string str)
{
	status = str;
}
void dice::setResolve(bool res)
{
	resolve = res;
}
//return the top of the dice
void dice::printTop()
{
	cout << "The symbole of the top of dice is " << topOfDice << endl;
}
//Returning the symbol of the top of the dice
string dice::getDiceTop()
{
	return topOfDice;
}
//returns the status of the dice
string dice::getStatus()
{
	return status;
}
//returns the status of the dice
bool dice::getResolve()
{
	return resolve;
}
//generating a number between 1 and 5
void dice::rollDice()
{
	int num = (rand() % diceSymbols->size());
	topOfDice = diceSymbols[num];
}



	