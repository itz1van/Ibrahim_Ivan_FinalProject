#pragma once
#include <string>
#include <iostream>
using namespace std;
class Car
{
protected:
	string vin;
	string make;
	string model;
	int year;
	float price;
	string category;

public:
	void setVin(string vin);
	string getVin();

	void setMake(string make);
	string getMake();

	void setModel(string model);
	string getModel();

	void setYear(int year);
	int getYear();

	void setPrice(float price);
	float getPrice();

	void setCategory(string category);
	string getCategory();

	Car();
	Car(string vin, string make, string model, int year, float price, string category);
};

