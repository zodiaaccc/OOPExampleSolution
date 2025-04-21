#include <iostream>
#include <string>
using namespace std;

class Student {

public:
	string name;
	int age;
	int* marks;
	int countMarks;
	bool alive;
   //Default-constructor or construsctor without arguments
	Student() {
		name = "no name";
		age = 13;
		marks = nullptr;
		countMarks = 0;
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
	Student(string name, int age, double mark, bool alive) {
		this ->name = name;
		this->age = age;
		this->alive = alive;
		marks = new int[countMarks];
		for (int i = 0; i < countMarks; i++)
		{
			marks[i] = 4;
		}
	}

	//copy construsctor 
	Student(const Student& student) {
		//cout << "copycopycopy";
		name = student.name;
		age = student.age;
		mark = student.mark;
		alive = student.alive;
	}
	//Destuctor	
	~Student() {
	 //cout << "destructor.." << endl;
		if (marks != nullptr) {
			delete[] marks;
		}

	}
	string toString() {
		string s = "Name: " + name + "\n";
		s += "Age: " + to_string(age) + "\n";
		s += "count of marks: " + to_string(countMarks) + "\n";
		s += "Alive: ";
		s += (alive ? "Yes" : "No");
		return s + "\n";
	}
	string get_all_marks() {
		if (countMarks == 0)
		{
			return "[]";
		}
		string s = "";
		for (int i = 0; i < countMarks; i++)
		{
			string += to_string(marks[i]) + " ";
		}
		return s;
	}
	int getMark(int index) {
		return index < 0 || index >= countMarks ? 0 : marks[index];
	}
	void setMark(int index) {
		if (index >= 0 ||)
		{

		}
	}
};