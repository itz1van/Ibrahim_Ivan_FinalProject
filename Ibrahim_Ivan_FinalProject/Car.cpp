#include "Car.h"

void Car::setVin(string vin)
{
	this->vin = vin;
}

string Car::getVin()
{
	return vin;
}

void Car::setMake(string make)
{
	this->make = make;
}

string Car::getMake()
{
	return make;
}

void Car::setModel(string model)
{
	this->model = model;
}

string Car::getModel()
{
	return model;
}

void Car::setYear(int year)
{
	this->year = year;
}

int Car::getYear()
{
	return year;
}

void Car::setPrice(float price)
{
	this->price = price;
}

float Car::getPrice()
{
	return price;
}

void Car::setCategory(string category)
{
	this->category = category;
}

string Car::getCategory()
{
	return category;
}

Car::Car()
{
	cout << "error no parameters passed" << endl;
}

Car::Car(string vin, string make, string model, int year, float price, string category)
{
	this->vin = vin;
	this->make = make;
	this->model = model;
	this->year = year;
	this->price = price;
	this->category = category;
}
