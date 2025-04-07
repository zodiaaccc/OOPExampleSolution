#include "Teacher.h"




int main() {
	Student* list = nullptr;
	int size;
	
	cout << "Input number of students:";
	cin >> size;

	list = new Student[size];

	cout << "Input data of students: ";
	for (int i = 0; i < size; i++)
	{
		cout << "name: ";
		cin >> list[i].name;
		cout << "age: ";
		cin >> list[i].age;
		cout << "avg mark: ";
		cin >> list[i].mark;
		cout << "is alive(y/n): ";
		char answer;
		cin >> answer;
		 list[i].alive = islower(answer) == 'y';
	}

	Teacher teacher;

	Student result = teacher.getAllBestStudents(list, size);

	string msg = result.alive ? result.name : "No best students";

	cout << msg;

	return 0;
}