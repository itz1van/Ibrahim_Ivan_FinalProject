#include <iostream>
#include "newCar.h"
#include "oldCar.h"
#include "Dealership.h"
using namespace std;

int main()
{
    Dealership D;

    D.addNewCar("100000", "merc", "C-Class", 2023, 2, "Sudan", "AAA");
    D.addNewCar("200000", "Nissan", "GTR", 2023, 3, "Sudan", "AAA");
    D.addNewCar("300000", "Honda", "Civic", 2023, 4, "Sudan", "AAA");
    D.addNewCar("400000", "Toyota", "Camry", 2023, 5, "Sudan", "AAA");
    D.addNewCar("500000", "Doge", "Charger", 2023, 6, "Sudan", "AAA");

    D.showCatalog();

    cout << endl << "after" << endl << endl;

    D.addOldCar("100000", "merc", "C-Class", 2013, 2, "Sudan", 10000);
    D.addOldCar("200000", "Nissan", "GTR", 2021, 3, "Sudan", 20000);
    D.addOldCar("300000", "Honda", "Civic", 2015, 4, "Sudan", 30000);
    D.addOldCar("400000", "Toyota", "Camry", 2020, 5, "Sudan", 40000);
    D.addOldCar("500000", "Doge", "Charger", 2017, 6, "Sudan", 50000);


    D.showCatalog();
}

