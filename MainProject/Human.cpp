#include "Human.h"

Human::Human() :Human("", 0, false) {
	cout << "Human default constructor" << endl;
}
Human::Human(string name, int age, bool gender) {
	this->name = name;
	this->age = age;
	this->gender = gender;
}
Human::Human(const Human& human)
	: Human(human.name, human.age, human.gender) {}
Human::~Human() {
  cout << "Human destructor" << endl;
}

string Human::getName(string name) {
	return name;
}
int Human::getAge(int age) {
	return age;
}
bool Human::isGender() {
	return gender;
}
void Human::setGender(bool gender) {
	this->gender = gender;
}
string Human::toString() {
	string s = "";
	s += name + " "+to_string(age)+
		(gender ? "male" : "female");
	string result;
}