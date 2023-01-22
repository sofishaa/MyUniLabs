//Число x менше 5, але більше або дорівнює 2 (1 завдання, №1 у списку)
#include <iostream>
#include <Windows.h>
#include <string>
#include <stdbool.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");

	int x < 5;

	cout << "Змінна x: ";
	getline(cin, x);

	if ((x > 2)||(x = 2))
	{
		//Якщо умова виконана (true)
		bool isConditionRigth = true;
	}
	if (!(x < 2) || (x != 2))
	{

		//Якщо умова виконана (true)
		bool isConditionRigth = true;
	}
	else
	{
		//Якщо умова невиконана (false)
		bool isConditionRight = false;
	}

	return 0;
}
