
#include "Manager.h"

int main() {
	int count;

	cout << "Input number of students: ";
	cin >> count;

	Student* list = nullptr;

	Initializer initializer;
	Manager manager;
	initializer.init(list, count);

	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}
	int size = 0;
	Student* bestlist = manager.getBestStudents(list, count, &size);
	cout << "list of best students";
	for (int i = 0; i < count; i++)
	{
		cout << bestlist[i].toString() << endl;
	}
	Student* worstlist = manager.getWorstStudents(list, count, &size);
	cout << "list of worst students";
	for (int i = 0; i < count; i++)
	{
		cout << worstlist[i].toString() << endl;
	}
	delete[] list;
	delete bestlist;
	delete worstlist;
	return 0;
}