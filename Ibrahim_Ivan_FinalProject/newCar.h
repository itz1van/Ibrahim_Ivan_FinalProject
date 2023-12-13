#pragma once
#include "Car.h"
class newCar : public Car
{
private:
	string warrentyProvider;

public:
	void setWarrentyProvider(string a);
	string getWarrentyProvider();
	newCar();
	newCar(string vin, string make, string model, int year, float price, string category, string warrenty);

	void setYear(int a);
};

