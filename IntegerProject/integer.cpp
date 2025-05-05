#include <iostream>
#include "integerr.h"


Integer::Integer() {
	value = 0;
}
Integer::Integer(int v) {
	value = v;
}
void Integer::setValue(int v) {
	value = v;
}
int Integer::getValue() {
	return value;
}
void Integer::print() {
	std::cout << "value:" << value << std::endl;
}
void Integer::add(int num) {
	value = value + num;
}
void Integer::subtract(int num) {
	value = value - num;
}
void Integer::multiply(int num) {
	value = value * num;
}
void Integer::divine(int num) {
	if (value != 0)
	{
		value = value / num;
	}
	else
	{
		std::cout << "Error!" << std::endl; 
	}
}


