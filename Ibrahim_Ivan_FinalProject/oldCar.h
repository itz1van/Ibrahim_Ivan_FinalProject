#pragma once
#include "Car.h"
class oldCar : public Car
{
private:
	int mileage;

public:
	void setMileage(int m);
	int getMileage();
	oldCar();
	oldCar(string vin, string make, string model, int year, float price, string category, int mileage);
};

