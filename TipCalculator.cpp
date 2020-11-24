// TipCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Abhijit Halder
// 200433587

#include <iostream>
#include <iomanip>
#include "Console.h"

using namespace std;

double getTip(double cost, int per)
{
	// calculate tip by multiplying percentage value with cost of meal
	return (per * cost) / 100;
}

int main()
{
	double costOfMeal;
	int	tipPercent;
	cout << "Tip Calculator - By: Abhijit Halder\n\n";
	cout << "INPUT\n";
	// take double input from the get_double method in console class
	costOfMeal = console::get_double("Cost of meal: ", 0);
	// take int input from the get_int method in console class
	tipPercent = console::get_int("Tip percent: ", 0, 100);
	// call the function getTip to getTip value
	double tip = getTip(costOfMeal, tipPercent);
	cout << "\nOUTPUT\n";
	cout << "Cost of meal:" << setw(21) << fixed << setprecision(2) << costOfMeal << "\n";
	cout << "Tip percent:" << setw(21) << tipPercent << "%\n";
	cout << "Tip:" << setw(30) << fixed << setprecision(2) << tip << "\n";
	cout << "Total:" << setw(28) << fixed << setprecision(2) << costOfMeal + tip << "\n";
	cout << "\nBye!";
	system("pause>0");
}