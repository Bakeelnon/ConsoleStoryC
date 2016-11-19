#include <iostream>

using namespace std;

void era()
{
	cout << "Добро пожаловать в новый мир" << endl;
	cout << "::::::::::::::::::::::::::::::" << endl;;
}

void PickClass()
{
	int number;
	cout << "Pick your new class"<< endl;
	cout << "Enter the next number:" << endl;
	cout << "1:Warrior" << endl;
	cout << "2:Magic" << endl;
	cout << "3:MUSYA" << endl;
	while (true)
	{
		cout << "Pick your new class" << endl;
		cout << "Enter the next number:" << endl;
		cin >> number;
		if (number == 1)
		{
			cout << "You picket class - WARRIOR" << endl;
			break;
		}
		 if (number == 2)
		{
			cout << "You picket class - MAGIC" << endl;
			break;
		}
		 if (number == 3)
		{
			cout << "You picket class - MUSYA" << endl;
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	era();
	PickClass();
	system("pause");
	return 0;
}