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


newCar::newCar(string v, string m, string mo, int y, float p, string c, string w):Car(v,m,mo,y,p,c)
{
	warrentyProvider = w;
}
