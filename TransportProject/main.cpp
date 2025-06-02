#include "GasStation.h"

#include <iostream>
using namespace std;

int main() {
	const int size = 3;
	Transport* tr1 = new Car(50);
	Transport* tr2 = new Bus(450);
	Transport* tr3 = new Truck(500);

	Transport* transports[size]{ tr1,tr2,tr3 };

	/*Car cars[size]{ Car(40), Car(50), Car(45) };
	Bus buses[size]{Bus(255), Bus(250), Bus(300)};
	Truck trucks[size]{Truck(300),Truck(400),Truck(500)}
	Plane planes[size]{ Plane(2000),Plane(3000),Plane(3860) };*/

	GasStation station;

	int total = station.calculateTotalGas(transports,size);

	cout << "Total gas is: " << total << endl;
   
}