/*
 * Multiple3n5.h
 *
 *  Created on: Nov 8, 2018
 *      Author: frank.martens
 */

#ifndef MATH_MULTIPLE3N5_MULTIPLE3N5_H_
#define MATH_MULTIPLE3N5_MULTIPLE3N5_H_

#include <iostream>
#include <vector>
#include "../MathObject.h"
#include "../../peDebug.h"

using namespace std;

class Multiple3n5: public MathObject {
	private:
		int size;
		vector<int> results;

	public:
		Multiple3n5(int nTotal) {
			if (DEBUG) {
				cout << "\tDEBUG: Called Multiple3n5::Multiple3n5(int)\n";
			}
			size = nTotal;
		}

		// start the calculation
		void findMultiples() {
			if (DEBUG) {
				cout << "\tDEBUG: Called Multiple3n5::start()\n";
			}
			for (int i = 1; i < size; i++) {

				if ((i % 3) == 0) {
					results.push_back(i);
					if (DEBUG) cout << "found multiple of 3: " << i << "\n";
				} else if ((i % 5) == 0) {
					results.push_back(i);
					if (DEBUG) cout << "found multiple of 5: " << i << "\n";
				}
			}
		}

		void sumMultiples() {
			int sum = 0;
			for (auto i = results.rbegin(); i != results.rend(); ++i)
				sum += *i;
			cout << "sum of the multiples of 3 and 5: " << sum << "\n";
		}
};


#endif /* MATH_MULTIPLE3N5_MULTIPLE3N5_H_ */
