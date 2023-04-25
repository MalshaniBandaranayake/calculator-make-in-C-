// calculator make.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	char op;
	float num1;
	float num2 =5;
	cout << "enter a operator methord either + or - or * or /";
	cin >> op;
	cout << "enter two numbers";
	cin >> num1, num2;

	switch (op) {
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case ' *':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		break;
	
	}
	cin.get();
}

