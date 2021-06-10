/*
 * ProjectEuler.h
 *
 *  Created on: Nov 8, 2018
 *      Author: frank.martens
 */

#ifndef PROJECTEULER_H_
#define PROJECTEULER_H_

#include "Math/MathObject.h"
#include "Math/Multiple3n5.h"
#include "Math/Fibonacci.h"
#include "Math/LPF.h"
#include "peDebug.h"

#define MULT_3n5 1
#define FIBSUMEVN 2
#define LPF 3

class ProjectEuler {
	private:
		MathObject* mathObj;

	public:
		// Constructor that's called whenever a new object is created
		ProjectEuler();
		ProjectEuler(int nSelection) {
			switch (nSelection) {
				// Can add more cases as math functions are added...
				case MULT_3n5:
					mathObj = new Multiple3n5(1000);
					break;

				case FIBSUMEVN:
					mathObj = new Fibonacci(4000000);
					break;

				case LPF:
					mathObj = new LargestPrimeFactor(600851475143);
					break;

				default:
					cout << "Please make a selection.\n";
					exit(9);
					break;
			}
			// Simple switch statement to determine selection
			if (DEBUG) {
				cout << "\tDEBUG: Called ProjectEuler::ProjectEuler()\n";
				cout << "\tDEBUG: matObj :: " << &mathObj << "\n";
			}
		}
		~ProjectEuler() {
			delete mathObj;
		}

		void start() {
			mathObj->doWork();
		}
};



#endif /* PROJECTEULER_H_ */
