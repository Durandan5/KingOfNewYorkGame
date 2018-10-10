//#include "cardtest.cpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Region.h"
#include "Maploader.h"
#include "playerDriver.h"
#include "diceTest.h"
#include "cardtest.h"

using namespace std;

int main() {
	
	Maploader map("test2Bidirectional.map");
	playerDriver();
	diceDriver();
	cardDriver();

	system("pause");
 	return 0;
}