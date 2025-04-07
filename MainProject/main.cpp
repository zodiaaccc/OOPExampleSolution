#include "Student.h"


void change(Student student) {
	student.name = "Vova";
	student.age = 15;
	student.mark = 10;
	student.alive = false;
}

int main() {
	Student st1, temp;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;

	/*st2.name = "Ivan";
	st2.age = 15;
	st2.mark = 4.5;
	st2.alive = true;*/


	temp = st1;

	cout << "Before: " << endl;
	cout << st1.getString() << endl;
	cout << temp.getString() << endl;

	/*change(st1);*/
	st1.name = "Vova";

	cout << "After: " << endl;
	cout << st1.getString() << endl;
	cout << temp.getString() << endl;
	

	return 0;
}