#include "main.h"
class Animal
{
	public:
		static int count;
		string name;

		Animal() {
			count++;
		}
		Animal(string name) : name(name) {
			count++;
		}

		static int getCount() {
			return count;
		}
		virtual void getVoice() {
			cout << "..." << endl;
		}
	};




