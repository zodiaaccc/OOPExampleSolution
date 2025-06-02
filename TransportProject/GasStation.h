#include "Bus.h"
#include "Car.h"
#include "Plane.h"
#include "Truck.h"
class GasStation
{
public:
	int calculatecalculateTotalGas(Car* cars, Bus* buses, Truck* trucks, int size) {
		int total = 0;
		for (int i = 0; i < size; i++)
		{
			total += cars[i].gas;
		}
		for (int i = 0; i < size; i++)
		{
			total += buses[i].gas;
		}
		for (int i = 0; i < size; i++)
		{
			total += trucks[i].gas;
		}
	}
};

