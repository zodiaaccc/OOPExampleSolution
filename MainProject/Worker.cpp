#include "Worker.h"

Worker::Worker() : Worker("", 0, false, 0.0 ,"") {}
Worker::Worker(string name, int age, bool gender, double salary, string company) {
	this->name = name;
	this->age = age;
	this->gender = gender;
	this->salary = salary;
	this->company = company;
}
Worker::Worker(const Worker& worker) : Worker(worker.name, worker.age, worker.gender, worker.salary, worker.company) {}
Worker::~Worker() {}

double Worker::getSalary() {
	return salary;
}
void Worker::setSalary(double salary) {
	this->salary = salary;
}
void Worker::setCompany(string company) {
	this->company = company;
}
string Worker::toString() {
	string s = "";
	s += name + " " + to_string(age) +(gender ? "male" : "female") +
		to_string(salary)+" " + to_string(company);
	string result;
}