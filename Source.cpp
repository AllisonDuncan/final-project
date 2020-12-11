/*
	Final Project, Business Math Calculator
	Source File
	Programmed by Allison Duncan
*/

#include <iostream>
#include <conio.h>
#include <string>
#include "Header.h"

using namespace std;

inline void title() {cout << "Welcome to the Interest Calculator\nProgrammed by Allison Duncan\n\n"; };


int main()
{
	interest calculate;
	char option;

	title();
	option = menu();

	//repeat menu until selected option is C to exit the program
	while (option != 'C' && option != 'c')
	{
		//compound interest selection
		if (option == 'A' || option == 'a')
		{
			calculate.getCompound();
			calculate.calcCompound();
			calculate.print();
		}
		//simple interest selection
		else if (option == 'B' || option == 'b') 
		{
			calculate.getSimple();
			calculate.calcSimple();
			calculate.print();
		}
		else //catch all invalid input
		{
			cout << "Please enter a valid option of A, B, or C"
				<< "\nPress any key to return to the main menu";
		}
		_getch();
		system("cls");
		option = menu();
	}
	cout << "\nThank you for using the Interest Calculator"
		<< "\nHave a good day!";
	_getch();

	return 0;
}