#include "oldCar.h"

void oldCar::setMileage(int m)
{
	while (m < 0)
	{
		cout << "ERROR: Wrong input\nPlease Type in correct mileage: ";
		cin >> m;
	}
	mileage = m;
}

int oldCar::getMileage()
{
	return mileage;
}

oldCar::oldCar()
{

	cout << "error no parameters" << endl;
	cout << "error no parameters passed" << endl;
	this->vin = "000000";
	this->make = "make";
	this->model = "model";
	this->year = 1000;
	this->price = 1000;
	this->category = "category";
	setMileage(100);
}

oldCar::oldCar(string vin, string make, string model, int year, float price, string category, int mileage):Car(vin,make,model,year,price,category)
{
	setMileage(mileage);
}
