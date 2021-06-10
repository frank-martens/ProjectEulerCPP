/*
 * LPF.h
 *
 * This is for finding the Largest Prime Factor
 *
 *  Created on: June 9th, 2021
 *      Author: frank.martens
 */

#ifndef MATH_LPF_H_
#define MATH_LPF_H_

#include <iostream>
#include "./MathObject.h"
#include "../peDebug.h"

using namespace std;

class LargestPrimeFactor : public MathObject {
	private:
		long int lpfNumber;

	public:
		LargestPrimeFactor () {
			lpfNumber = 0;
		}
		LargestPrimeFactor(long int someNumber) {
			lpfNumber = someNumber;
			cout << "\n\nStarting Largest Prime Factor calculation of " << lpfNumber << "\n";
		}

		void doWork() {
			if (lpfNumber == 0) {
				cout << "Number must be greater than 0\n\n";
				return;
			}

			long int wNum = lpfNumber;
			long int div=2, ans = 0, maxFact;
			while(wNum != 0) {
				if (DEBUG) {
					cout << "maxFact: " << maxFact << "\n";
				}
				if(wNum % div !=0) {
					div = div + 1;
				} else {
					maxFact = wNum;
					wNum = wNum / div;
					if(wNum == 1) {
						cout << maxFact << " is the largest prime factor of " << lpfNumber << "\n\n";
						ans = 1;
						break;
					}
				}
			}
		}

};




#endif /* MATH_LPF_H_ */
