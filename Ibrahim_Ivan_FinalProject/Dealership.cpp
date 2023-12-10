#include "Dealership.h"

void Dealership::showCatalog()
{
	for (int i = 0; i < oldCars.size(); i++)
	{
		(
			cout << oldCars[i]->getYear() << " "
			<< oldCars[i]->getMake() << " "
			<< oldCars[i]->getModel() << " "
			<< "MILEAGE: " << oldCars[i]->getMileage() << " "
			<< "PRICE: " << oldCars[i]->getPrice() << endl

		);
	}

	for (int i = 0; i < newCars.size(); i++)
	{
		(
			cout << newCars[i]->getYear() << " "
			<< newCars[i]->getMake() << " "
			<< newCars[i]->getModel() << " "
			<< "PRICE: " << newCars[i]->getPrice() << endl

		);

	}

}

void Dealership::addNewCar(string vin, string make, string model, int year, float price, string category, string warrenty)
{
	newCar* carpntr = new newCar(vin, make, model, year, price, category, warrenty);
	newCars.push_back(carpntr);
}

void Dealership::addOldCar(string vin, string make, string model, int year, float price, string category, int mileage)
{
	oldCar* carpntr = new oldCar(vin, make, model, year, price, category, mileage);
	oldCars.push_back(carpntr);
}

void Dealership::sellNewCar(string vin)
{
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getVin() == vin)
		{
			newCar* carpntr = newCars[i];
			newCars.erase(newCars.begin() + i);
			delete carpntr;
		}
	}
}

void Dealership::sellOldCar(string vin)
{
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getVin() == vin)
		{
			oldCar* carpntr = oldCars[i];
			oldCars.erase(oldCars.begin() + i);
			delete carpntr;
		}
	}
}
