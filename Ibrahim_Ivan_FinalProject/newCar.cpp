#include "newCar.h"
#include "ctime"

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
	cout << "error no parameters passed" << endl;
	this->vin = "000000";
	this->make = "make";
	this->model = "model";
	this->year = 1000;
	this->price = 1000;
	this->category = "category";
	setWarrentyProvider("AAA");
}


newCar::newCar(string vin, string make, string model, int year, float price, string category, string warrenty):Car(vin,make,model,year,price,category)
{
	warrentyProvider = warrenty;
}

//function overiding
void newCar::setYear(int a)
{

	while (a < 2023)
	{
		cout << "Too old for new car\nEnter year >=" << 2023;
		cin >> a;
	}

	year = a;
}
