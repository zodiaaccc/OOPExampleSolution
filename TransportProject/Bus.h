#pragma once
#include "Transport.h"
class Bus : public Transport
{
	int count;

	Bus(int tank) : Transport(tank) {};
};

