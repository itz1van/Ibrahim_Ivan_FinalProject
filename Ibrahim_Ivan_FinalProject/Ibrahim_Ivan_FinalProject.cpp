#include <iostream>
#include "newCar.h"
#include "oldCar.h"
#include "Dealership.h"
using namespace std;

int main()
{
    Dealership D;

    D.addNewCar("1FTRF14505NC06477", "merc", "C-Class", 2023, 60000, "Sudan", "AAA");
    D.addNewCar("2C4RC1CG3CR270878", "Nissan", "GTR", 2023, 300000, "Sudan", "Progressive");
    D.addNewCar("1GCCS14E188220070", "Honda", "Civic", 2023, 41000, "Sudan", "Geico");
    D.addNewCar("1FTSW2BY7AEB26799", "Toyota", "Camry", 2023, 35000, "Sudan", "Nationwide");
    D.addNewCar("4T4BF3EK5BR117055", "Doge", "Charger", 2023, 60000, "Sudan", "Statefarm");
    D.addNewCar("1FMYU94165KA72519", "Chevy", "Equinox", 2023, 36000, "SUV", "Allstate");

    D.addOldCar("1G8AJ55F07Z171181", "merc", "C-Class", 2013, 29000, "Sudan", 10000);
    D.addOldCar("1N4AL3APXDC162687", "Nissan", "GTR", 2021, 90000, "Sudan", 20000);
    D.addOldCar("5NPEB4AC5DH552747", "Honda", "Civic", 2015, 12000, "Sudan", 30000);
    D.addOldCar("2G1FK1EJ5A9175310", "Toyota", "Camry", 2020, 11000, "Sudan", 40000);
    D.addOldCar("19UYA42463A006621", "Doge", "Charger", 2017, 9000, "Sudan", 50000);
    D.addOldCar("1FM5K7F88EGB89626", "Chevy", "Equinox", 2023, 6, "SUV", 500000);

    int answer, searchAnswer = 0, a = 0;
    string make, model, category, vin, addCarAnswer;

    do
    {
        D.menu();
        cout << "\nEnter your choice: ";
        std::cin >> answer;
        while (answer < 0 || answer > 4)
        {
            cout << "Incorrect Input please pick a correct number: ";
            std::cin >> answer;

        }
        switch (answer)
        {
        case 1:
            cout << "1. Search by Make"
                << "\n2. Search by Model"
                << "\n3. Search by Category"
                << "\n4. Show all new Cars"
                << "\n5. Show all old Cars";
            std::cin >> searchAnswer;

            while (searchAnswer < 0 || searchAnswer > 5)
            {
                cout << "Incorrect Input please pick a correct number: ";
                std::cin >> searchAnswer;

            }

            if (searchAnswer == 1)
            {
                cout << "Enter Make of Cars (case sensitive): ";
                std::cin >> make;
                D.searchCatalogByMake(make);
            }
            else if (searchAnswer == 2)
            {
                cout << "Enter model of Cars (case sensitive): ";
                std::cin >> model;
                D.searchCatalogByModel(model);
            }
            else if (searchAnswer == 3)
            {
                cout << "Enter Category of Cars (case sensitive): ";
                std::cin >> category;
                D.searchCatalogByCategory(category);
            }
            else if (searchAnswer == 5)
            {
                D.showCatalog('n');
            }
            else
            {
                D.showCatalog('o');
            }

        case 2:
            cout << "Please type in the EXACT vin number (case sensitive): ";
            std::cin >> vin;

            a = D.oldOrNew(vin);
            if (a == 1)
            {
                D.sellNewCar(vin);
            }
            else if (a == 2)
            {
                D.sellOldCar(vin);
            }
            else
            {
                cout << "No cars with that vin in our inventory" << endl;
            }

        case 3:
            cout << "New or old car (N/O): ";
            std::cin >> addCarAnswer;


        default:
            break;
        }

    } while (answer != 4);

}
