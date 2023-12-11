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
	void menu();

	void showCatalog();
	void showCatalog(const char a);
	void addNewCar(string vin, string make, string model, int year, float price, string category, string warrenty);
	void addOldCar(string vin, string make, string model, int year, float price, string category, int mileage);

	void sellNewCar(string vin);
	void sellOldCar(string vin);

	void searchCatalogByMake(string make);
	void searchCatalogByModel(string model);
	void searchCatalogByCategory(string Category);
	void searchCatalogByRange(int max);
	void searchCatalogByRange(int max, int min);

	int oldOrNew(string vin);
	

};

