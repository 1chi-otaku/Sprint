#include <iostream>
#include "Participant.h"
#include "Human.h"
#include "Robot.h"
#include "Cat.h"
#include "Wall.h"
#include "Treadmill.h"
using namespace std;


void PrintPartMenu();
void PrintObstMenu();

int main() {
	
	Participant* participants[3];
	Obstacle* obstacles[3];

	int input;
	cout << "Create 3 participants:";

	for (int i = 0; i < 3; i++)
	{
		system("cls");
		PrintPartMenu();
		cin >> input;
		if (input > 3 || input < 1) {
			cout << "Wrong input!" << endl;
			i--;
			system("pause");
			continue;
		}
		switch (input)
		{
		case 1:
			participants[i] = new Human;
			break;
		case 2:
			participants[i] = new Cat;
			break;
		case 3:
			participants[i] = new Robot;
			break;
		}
		system("cls");
		participants[i]->Init();
		system("cls");
		participants[i]->Print();
		system("pause");
	}


	for (int i = 0; i < 3; i++)
	{
		system("cls");
		cout << "Create " << 3 - i << " obstacles:" << endl;;
		PrintObstMenu();
		cin >> input;
		if (input > 2 || input < 1) {
			cout << "Wrong input!" << endl;
			i--;
			system("pause");
			continue;
		}
		switch (input)
		{
		case 1:
			obstacles[i] = new Wall;
			break;
		case 2:
			obstacles[i] = new Treadmill;
			break;
		}
		system("cls");
		obstacles[i]->Init();
		system("cls");
		obstacles[i]->Print();
		system("pause");
	}

	system("cls");
	cout << "Press any key to start competition!" << endl;
	system("pause");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			bool overcome = obstacles[j]->Overcome(participants[i]);
			if (overcome) {
				cout << participants[i]->GetType() << " " << participants[i]->GetName() << " managed to overcome obstacle #" << j+1 << endl;
				if (j == 2) {
					cout << participants[i]->GetType() << " " << participants[i]->GetName() << " overcame all the obstacles!" << endl;
				}
			}
			else {
				cout << participants[i]->GetType() << " " << participants[i]->GetName() << " failed obstacle #" << j+1 << endl;;
				break;
			}
		}
	}

	return 0;
}


void PrintPartMenu() {
	cout << "1 - Human" << endl;
	cout << "2 - Cat" << endl;
	cout << "3 - Robot" << endl;
}

void PrintObstMenu()
{
	cout << "1 - Wall" << endl;
	cout << "2 - Treadmill" << endl;
}
