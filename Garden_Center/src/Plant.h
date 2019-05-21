/*
 * Plant.h
 *
 *  Created on: May 19, 2019
 *      Author: geoff
 */


#ifndef PLANT_H_
#define PLANT_H_
#include <string>

enum Color{red, orange, yellow, green, blue, violet, brown, black, white};
enum Exposure{shade, part_shade, part_sun, sun};

class Plant {

	private:
		std::string plantName;
		Color plantColor;
		bool plantThorns;
		Exposure plantExposure;

	public:
		// Constructor
		Plant(std::string newPlantName, Color newPlantColor, bool newPlantThorns, Exposure newPlantExposure);
		Plant();

		// Getters
		std::string getPlantName(){return plantName;}
		Color getPlantColor(){return plantColor;}
		bool getPlantThorns(){return plantThorns;}
		Exposure getPlantExposure(){return plantExposure;}

		// Setters
		void setPlantName(std::string newPlantName);
		void setPlantColor(Color newPlantColor);
		void setPlantThorns(bool newPlantThorns);
		void setPlantExposure(Exposure newPlantExposure);
};


#endif /* PLANT_H_ */
