/*
 * Plant.cpp
 *
 *  Created on: May 19, 2019
 *      Author: geoff
 */

#include "Plant.h"

// Full Constructor
Plant::Plant(std::string newPlantName, Color newPlantColor, bool newPlantThorns, Exposure newPlantExposure) {

	plantName = newPlantName;
	plantColor = newPlantColor;
	plantThorns = newPlantThorns;
	plantExposure = newPlantExposure;
}

Plant::Plant() {

	plantName = "Default";
	plantColor = red;
	plantThorns = false;
	plantExposure = sun;
}

// Setters
void Plant::setPlantName(std::string newPlantName) {plantName = newPlantName;}
void Plant::setPlantColor(Color newPlantColor) {plantColor = newPlantColor;}
void Plant::setPlantThorns(bool newPlantThorns) {plantThorns = newPlantThorns;}
void Plant::setPlantExposure(Exposure newPlantExposure) {plantExposure = newPlantExposure;}



