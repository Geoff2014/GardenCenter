//============================================================================
// Name        : Garden_Center.cpp
// Author      : Geoff Lucas
// Version     :
// Copyright   : Have fun if you really want to use it.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

#include "Plant.h"

using namespace std;

// Function Declarations
void show_plants(list<Plant>& plantList);
void add_plant(list<Plant>& plantList);
void delete_plant(Plant oldPlant);
void search_plant(string toSearch);

int main() {

	list <Plant> plantList;

	plantList.push_front(Plant("Rose", red, true, sun));
	Plant newPlant = Plant("Rose", red, true, sun);
	Plant oldPlant = newPlant;
	string toSearch = "Lily";

	while (true){

		char choice;


		cout << "Welcome to the Garden Center Program.  Please select an option:" << endl << endl;
		cout << "1) See current inventory" << endl;
		cout << "2) Add plant to current inventory" << endl;
		cout << "3) Remove plant from current inventory" << endl;
		cout << "4) Search for plant in inventory" << endl;
		cout << "5) Exit Application" << endl;

		cin >> choice;

		switch(choice)
		{
			case '1':
				show_plants(plantList);
				break;
			case '2':
				add_plant(plantList);
				break;
			case '3':
				delete_plant(oldPlant);
				break;
			case '4':
				search_plant(toSearch);
				break;
			case '5':
				cout << "Exiting application";
				break;
			default: cout << "This is not a valid choice.  Please select again." << endl;
		}

		if (choice == '5'){break;}

	}

	return 0;
}

void show_plants(list<Plant>& plantList){

	// Variable / iterator
	int i = 1;
	list<Plant>::iterator iter;

	cout << "Your current inventory:" << endl << endl;

	for(iter = plantList.begin(); iter != plantList.end(); iter++){
		cout << i << ")" << (*iter).getPlantName() << endl;
		i++;
	}

	// Just add some space
	cout << endl;
}

void add_plant(list<Plant>& plantList){

	// Plant member variables
	string plantName;
	Color plantColor;
	bool plantThorns;
	Exposure plantExposure;

	// Temp holders
	string color;
	string thorns;
	string exposure;

	// Other Variables
	string seeList;
	int numPlants;

	cout << "Would you like to see the current inventory? (Yes / No)";
	cin >> seeList;

	transform(seeList.begin(), seeList.end(), seeList.begin(), ::tolower);

	if (seeList.compare("yes") == 0 || seeList.compare("y") == 0 || seeList.compare("t") == 0 || seeList.compare("true") == 0)
		show_plants(plantList);


	cout << "Enter the name: ";
	cin >> plantName;
	cout << "Enter the color: ";
	cin >> color;
	cout << "Enter if the plant has thorns (true / false): ";
	cin >> thorns;
	cout << "Enter the required sun exposure: ";
	cin >> exposure;
	cout << "How many of these plants would you like to add: ";
	cin >> numPlants;

	cout << "Exiting";

}

void delete_plant(Plant oldPlant){

}

void search_plant(string toSearch){

}
