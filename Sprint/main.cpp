#include <iostream>
#include "Participant.h"
#include "Human.h"
#include "Robot.h"
#include "Cat.h"
#include "Wall.h"
#include "Treadmill.h"
using namespace std;
int main() {
	
	Participant* pointer = new Human("Jell",5,5);
	
	Wall wall(55555);

	bool karasik = wall.Overcome(pointer);

	cout << karasik;


	return 0;
}