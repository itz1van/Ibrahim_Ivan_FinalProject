#include "newCar.h"

void newCar::setWarrentyProvider(string a)
{
	warrentyProvider = a;
}

string newCar::getWarrentyProvider()
{
	return warrentyProvider;
}

newCar::newCar()
{
	cout << "error no parameters" << endl;
}


newCar::newCar(string vin, string make, string model, int year, float price, string category, string warrenty):Car(vin,make,model,year,price,category)
{
	warrentyProvider = warrenty;
}
