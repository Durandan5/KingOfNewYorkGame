#pragma once
#include <string>
using namespace std;
class dice
{
	public:
		string diceSymbols[6] = { "Energy", "Heal", "Attack", "Celebrity", "Destruction", "Ouch" };
		void setDiceTop(string top);
		void printTop();
		string getDiceTop();
		void rollDice();
		string getStatus();
		void setResolve(bool res);
		bool getResolve();
		void setStatus(string str);
		dice();
		
	private:
		string topOfDice;
		string status;
		bool resolve;

};
