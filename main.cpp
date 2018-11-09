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

	cout << "Project Euler...\n\n";
	cout << "Select from one of the following:\n";
	cout << "1) Multiples of 3 & 5 below 1000\n\n";

	cout << "Enter Value: ";
	cin >> nSelect;

	ProjectEuler projectEuler(nSelect);
	projectEuler.calculate();
}

