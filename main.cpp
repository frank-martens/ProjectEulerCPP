/*
 * main.cpp
 *
 *  Created on: Nov 8, 2018
 *      Author: frank.martens
 */


#include <iostream>
#include "ProjectEuler.h"
#include "peDebug.h"
using namespace std;


int main() {
	int nSelect;

	cout << "Project Euler... https://projecteuler.net\n\n";
	cout << "Select from one of the following:\n\n";
	cout << "1) Multiples of 3 & 5 below 1000 (Project Euler Problem #1)\n";
	cout << "2) Fibonacci #s below 4,000,000 (Project Euler Problem #2)\n";
	cout << "3) Largest Prime Factor of 600851475143 (Project Euler Problem #3)\n\n";

	cout << "Enter Choice: ";
	cin >> nSelect;

	ProjectEuler projectEuler(nSelect);
	projectEuler.start();
}

