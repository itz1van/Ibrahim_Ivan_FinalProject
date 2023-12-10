#include "oldCar.h"

void oldCar::setMileage(int m)
{
	mileage = m;
}

int oldCar::getMileage()
{
	return mileage;
}

oldCar::oldCar()
{

	cout << "error no parameters" << endl;
}

oldCar::oldCar(string vin, string make, string model, int year, float price, string category, int mileage):Car(vin,make,model,year,price,category)
{
	setMileage(mileage);
}
