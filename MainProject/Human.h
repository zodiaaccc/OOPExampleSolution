#include "main.h"

class Human
{
private:
	string name;
	int age;
	bool gender;
protected:

public:
	
	Human();
	Human(string name, int age, bool gender);
	Human(const Human& human);
	~Human();

	string getName(string name);
	int getAge(int age);
	bool isGender();
	void setGender(bool gender);
	string toString();
};

