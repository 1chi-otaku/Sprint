#include <iostream>
#include "Participant.h"
#include "Human.h"
#include "Robot.h"
#include "Cat.h"
using namespace std;
int main() {

	Human human("Vlad",2.6,5);
	Robot robot("Robbie", 15, 5);
	Cat karasik("Karasik", 65, 190);

	human.Print();
	cout << endl;
	robot.Print();
	cout << endl;
	karasik.Print();


	return 0;
}