/*
	Final Project, Business Math Calculator
	Header File
	Programmed by Allison Duncan
*/

#ifndef Header
#define Header

#include <iostream>

using namespace std;

class interest
{
	public:
		void getCompound();
		void getSimple();
		void calcCompound();
		void calcSimple();
		void print();
		string str;

	private:
		float deposit;
		float interestRate;
		float value;
		int periods;
		int years;
		int exp;
};

//menu function
char menu()
{
		char option;

		cout << "    Main Menu"
			<< "\n\n      A. Calculate Compound Interest"
			<< "\n      B. Calculate Simple Interest"
			<< "\n      C. Exit" 
			<< "\nYour Selection:  ";
		cin >> option;

		return option;
}

//get values for compound interest calculation
//exception handling used for all inputs to verify all input is valid
void interest::getCompound()
{
	str = "Invalid input";
	system("cls");
	cout << "Enter values for compound interest calculation\n";
	try 
	{
		cout << "\nInitial Deposit Amount:                      ";
		cin >> deposit;
		if (!cin)
		{
			throw str;
		}
	}
	catch (string str)
	{
		cout << str << "\n";
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid deposit amount: ";
		cin >> deposit;
	}
try 
	{
		cout << "Interest rate in decimal form:              ";
		cin >> interestRate;
		if (!cin)
		{
			throw str;
		}
	}
	catch (string str)
	{
		cout << str << "\n";
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid interest amount: ";
		cin >> interestRate;
	}
try 
	{
		cout << "Periods compounding (4 periods in a year):   ";
		cin >> periods;
		if (!cin)
		{
			throw str;
		}
	}
	catch (string str)
	{
		cout << str << "\n";
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid number of periods: ";
		cin >> periods;
	}
	try 
	{
		cout << "Years invested:                              ";
		cin >> years;
		if (!cin)
		{
			throw str;
		}
	}
	catch (string str)
	{
		cout << str << "\n";
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid number of years: ";
		cin >> years;
	}
}

//calculate compound interest
void interest::calcCompound()
{
	exp = periods * years;
	value = deposit * pow((1 + interestRate / periods), exp);
}

//get values for simple interest calculation
//exception handling used for all inputs to verify all input is valid
void interest::getSimple()
{
		str = "Invalid input";

		system("cls");
		cout << "Enter values for simple interest calculation\n";
	try 
	{
		cout << "\nInitial Deposit Amount:             ";
		cin >> deposit;
		if (!cin)
		{
			throw str;
		}
	}
	catch (string str)
	{
		cout << str << "\n";
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid deposit amount: ";
		cin >> deposit;
	}
	try 
	{
		cout << "Interest rate in decimal form:     ";
		cin >> interestRate;
		if (!cin)
		{
			throw str;
		}
	}
	catch (string str)
	{
		cout << str << "\n";
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid interest amount: ";
		cin >> interestRate;
	}
	try 
	{
		cout << "Years invested:                     ";
		cin >> years;
		if (!cin)
		{
			throw str;
		}
	}
	catch (string str)
	{
		cout << str << "\n";
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a valid number of years: ";
		cin >> years;
	}
}

//calculate simple interest
void interest::calcSimple()
{
	value = deposit * interestRate * years;
	value = value + deposit;
}

//print end value of calculation
void interest::print()
{
	cout << "\nThe end value of this account is $"
		<< value
		<< "\n\n\n\nPress any key to return to the main menu";
}

#endif