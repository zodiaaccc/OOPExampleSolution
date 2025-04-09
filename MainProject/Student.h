#include <iostream>
#include <string>
using namespace std;

class Student {

public:
	string name;
	int age;
	double mark;
	bool alive;
   //Default-constructor or construsctor without arguments
	Student() {
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
	}
	//construsctor with arguments
	Student(string nm) {
		name = nm;
		age = 13;
		mark = 4.0;
		alive = true;
	}
	//canonical construsctor 
	Student(string nm, int a, double m, bool al) {
		name = nm;
		age = a;
		mark = m;
		alive = al;
	}

	//copy construsctor 
	Student(const Student& student) {
		cout << "copycopycopy";
		name = student.name;
		age = student.age;
		mark = student.mark;
		alive = student.alive;
	}
	//Destuctor
	~Student() {
		cout << "destructor.." << endl;
		
	}
	string toString() {
		string s = "Name: " + name + "\n";
		s += "Age: " + to_string(age) + "\n";
		s += "Mark: " + to_string(mark) + "\n";
		s += "Alive: ";
		s += (alive ? "Yes" : "No");
		return s + "\n";
	}

};