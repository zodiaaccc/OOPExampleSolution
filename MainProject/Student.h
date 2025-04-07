#include <iostream>
#include <string>
using namespace std;

class Student {

public:
	string name;
	int age;
	double mark;
	bool alive;
 
	string getString() {
		string s = "Name: " + name + "\n";
		s += "Age: " + to_string(age) + "\n";
		s += "Mark: " + to_string(mark) + "\n";
		s += "Alive: ";
		s += (alive ? "Yes" : "No");
		return s + "\n";
	}

};