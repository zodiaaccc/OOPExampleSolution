#include "Student.h"


void change(Student student) {
	student.name = "Vova";
	student.age = 15;
	student.mark = 10;
	student.alive = false;
}

int main() {
	Student* st1 = nullptr;
	st1 = new Student;

	st1->name = "Vlad";
	st1->age = 15;
	st1->mark = 9.5;
	st1->alive = true;

	Student* st2 = st1;

	cout << "Before: " << endl;
	cout << st1->getString() << endl;

	st2->name = "Matvey";

	cout << "Before: " << endl;
	cout << st1->getString() << endl;

	return 0;
}