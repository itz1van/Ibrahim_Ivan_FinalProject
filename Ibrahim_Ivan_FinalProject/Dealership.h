#pragma once
#include <iostream>
#include "oldCar.h"
#include "newCar.h"



class Dealership
{
private:
	
	vector<oldCar*> oldCars;
	vector<newCar*> newCars;

public:
	void showCatalog();
	void addNewCar(string vin, string make, string model, int year, float price, string category, string warrenty);
	void addOldCar(string vin, string make, string model, int year, float price, string category, int mileage);

	void sellNewCar(string vin);
	void sellOldCar(string vin);
	

};

