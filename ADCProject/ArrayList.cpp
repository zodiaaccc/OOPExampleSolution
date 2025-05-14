#include "ArrayList.h"

 ArrayList::ArrayList(int* array, int size) {
	 array = nullptr;
	 size = 0;
}


ArrayList :: ~ArrayList() {
	if (array != nullptr)
	{
		delete[] array;
	}
}

void ArrayList::add(int value) {
	int* newArray = new int[size + 1];
}
int ArrayList::get(int index) {
	if (array == nullptr || index >= size || index < 0)
	{
		return 0;
	}
}