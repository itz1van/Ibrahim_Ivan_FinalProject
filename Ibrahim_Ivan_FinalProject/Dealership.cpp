#include "Dealership.h"

void Dealership::menu()
{
	cout << "1. Search Inventory\n"
		<< "2. Sell Cars\n"
		<< "3. Add Cars to Inventory\n"
		<< "4. Exit\n";
}

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
			<< "PRICE: " << newCars[i]->getPrice() << " "
			<< "Warrenty: " << newCars[i]->getWarrentyProvider() << endl

		);

	}
	if (oldCars.size() == 0 && newCars.size() == 0)
	{
		cout << "No items in inventory" << endl << endl;
	}

}

void Dealership::showCatalog(const char a)
{
	if (a == 'o')
	{
		for (int i = 0; i < oldCars.size(); i++)
		{
			(
				cout << oldCars[i]->getYear() << " "
				<< oldCars[i]->getMake() << " "
				<< oldCars[i]->getModel() << " "
				<< "MILEAGE: " << oldCars[i]->getMileage() << " "
				<< "PRICE: " << oldCars[i]->getPrice() << endl << endl

				);
		}
	}
	else
	{
		for (int i = 0; i < newCars.size(); i++)
		{
			(
				cout << newCars[i]->getYear() << " "
				<< newCars[i]->getMake() << " "
				<< newCars[i]->getModel() << " "
				<< "PRICE: " << newCars[i]->getPrice() << " "
				<< "Warrenty: " << newCars[i]->getWarrentyProvider() << endl << endl

			);

		}
	}
	if (oldCars.size() == 0 && newCars.size() == 0)
	{
		cout << "No items in inventory" << endl << endl;
	}
}

void Dealership::addNewCar(string vin, string make, string model, int year, float price, string category, string warrenty)
{
	bool found = false;
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getVin() == vin)
		{
			found = true;
			break;
		}

	}
	if (!found)
	{
		newCar* carpntr = new newCar(vin, make, model, year, price, category, warrenty);
		newCars.push_back(carpntr);
	}
	
}

void Dealership::addOldCar(string vin, string make, string model, int year, float price, string category, int mileage)
{
	bool found = false;
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getVin() == vin)
		{
			found = true;
			break;
		}
	}
	if (!found)
	{
		oldCar* carpntr = new oldCar(vin, make, model, year, price, category, mileage);
		oldCars.push_back(carpntr);
	}
	
}

void Dealership::sellNewCar(string vin)
{
	bool found = false;
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getVin() == vin)
		{
			newCar* carpntr = newCars[i];
			newCars.erase(newCars.begin() + i);
			delete carpntr;
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "No Cars with that vin was found" << endl << endl;
	}
}

void Dealership::sellOldCar(string vin)
{
	bool found = false;
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getVin() == vin)
		{
			oldCar* carpntr = oldCars[i];
			oldCars.erase(oldCars.begin() + i);
			delete carpntr;
			found = true;
		}
	}
	if (!found)
	{
		cout << "NO Cars with that vin was found" << endl << endl;
	}
}

void Dealership::searchCatalogByMake(string make)
{
	int count = 0;
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getMake() == make)
		{
			(
				cout << oldCars[i]->getYear() << " "
				<< oldCars[i]->getMake() << " "
				<< oldCars[i]->getModel() << " "
				<< "MILEAGE: " << oldCars[i]->getMileage() << " "
				<< "PRICE: " << oldCars[i]->getPrice() << endl << endl

			);
			count++;
		}
	}
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getMake() == make)
		{
			(
				cout << newCars[i]->getYear() << " "
				<< newCars[i]->getMake() << " "
				<< newCars[i]->getModel() << " "
				<< "PRICE: " << newCars[i]->getPrice() << " "
				<< "Warrenty: " << newCars[i]->getWarrentyProvider() << endl << endl

			);
			count++;
		}
	}

	if (count == 0)
	{
		cout << "No " << make << " cars were found" << endl << endl;
	}
}

void Dealership::searchCatalogByModel(string model)
{
	int count = 0;
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getModel() == model)
		{
			(
				cout << oldCars[i]->getYear() << " "
				<< oldCars[i]->getMake() << " "
				<< oldCars[i]->getModel() << " "
				<< "MILEAGE: " << oldCars[i]->getMileage() << " "
				<< "PRICE: " << oldCars[i]->getPrice() << endl << endl

			);
			count++;
		}
	}
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getModel() == model)
		{
			(
				cout << newCars[i]->getYear() << " "
				<< newCars[i]->getMake() << " "
				<< newCars[i]->getModel() << " "
				<< "PRICE: " << newCars[i]->getPrice() << " "
				<< "Warrenty: " << newCars[i]->getWarrentyProvider() << endl << endl

			);
			count++;
		}
	}
	if (count == 0)
	{
		cout << "No " << model << "'s were found" << endl << endl;
	}
}

void Dealership::searchCatalogByCategory(string Category)
{
	int count = 0;
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getCategory() == Category)
		{
			(
				cout << oldCars[i]->getYear() << " "
				<< oldCars[i]->getMake() << " "
				<< oldCars[i]->getModel() << " "
				<< "MILEAGE: " << oldCars[i]->getMileage() << " "
				<< "PRICE: " << oldCars[i]->getPrice() << endl << endl

			);
			count++;
		}
	}
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getCategory() == Category)
		{
			(
				cout << newCars[i]->getYear() << " "
				<< newCars[i]->getMake() << " "
				<< newCars[i]->getModel() << " "
				<< "PRICE: " << newCars[i]->getPrice() << " "
				<< "Warrenty: " << newCars[i]->getWarrentyProvider() << endl << endl

			);
			count++;
		}
	}
	if (count == 0)
	{
		cout << "There are no " << Category << "'s in our inventory" << endl << endl;
	}
}

void Dealership::searchCatalogByRange(int max)
{
	int count = 0;
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getPrice() <= max)
		{
			(
				cout << oldCars[i]->getYear() << " "
				<< oldCars[i]->getMake() << " "
				<< oldCars[i]->getModel() << " "
				<< "MILEAGE: " << oldCars[i]->getMileage() << " "
				<< "PRICE: " << oldCars[i]->getPrice() << endl << endl

				);
			count++;
		}
	}
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getPrice() <= max)
		{
			(
				cout << newCars[i]->getYear() << " "
				<< newCars[i]->getMake() << " "
				<< newCars[i]->getModel() << " "
				<< "PRICE: " << newCars[i]->getPrice() << " "
				<< "Warrenty: " << newCars[i]->getWarrentyProvider() << endl << endl

				);
			count++;
		}
	}
	if (count == 0)
	{
		cout << "There are no Cars available under $" << max << endl << endl;
	}
}

void Dealership::searchCatalogByRange(int max, int min)
{
	int count = 0;
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getPrice() <= max && oldCars[i]->getPrice() >= min)
		{
			(
				cout << oldCars[i]->getYear() << " "
				<< oldCars[i]->getMake() << " "
				<< oldCars[i]->getModel() << " "
				<< "MILEAGE: " << oldCars[i]->getMileage() << " "
				<< "PRICE: " << oldCars[i]->getPrice() << endl << endl

				);
			count++;
		}
	}
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getPrice() <= max && newCars[i]->getPrice() >= min)
		{
			(
				cout << newCars[i]->getYear() << " "
				<< newCars[i]->getMake() << " "
				<< newCars[i]->getModel() << " "
				<< "PRICE: " << newCars[i]->getPrice() << " "
				<< "Warrenty: " << newCars[i]->getWarrentyProvider() << endl << endl

				);
			count++;
		}
	}
	if (count == 0)
	{
		cout << "There are no cars between the range: $" << min << " - $" << max << endl;
	}
}

int Dealership::oldOrNew(string vin)
{
	for (int i = 0; i < oldCars.size(); i++)
	{
		if (oldCars[i]->getVin() == vin)
		{
			return 1;
		}
	}
	for (int i = 0; i < newCars.size(); i++)
	{
		if (newCars[i]->getVin() == vin)
		{
			return 2;
		}
	}

	return 3;
}
