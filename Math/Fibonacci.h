/*
 * Fibonacci.h
 *
 *  Created on: Nov 9, 2018
 *      Author: frank.martens
 */

#ifndef MATH_FIBONACCI_FIBONACCI_H_
#define MATH_FIBONACCI_FIBONACCI_H_

#include <iostream>
#include <vector>
#include "./MathObject.h"
#include "../peDebug.h"

using namespace std;

class Fibonacci: public MathObject {
	private:
		int fibLimit;
		vector<int> fiboNaccis;

	public:
		Fibonacci() {
			fibLimit = 0;
		}

		Fibonacci(int pLimit) {
			fibLimit = pLimit;
		}

		void doWork() {
			int prev = 0; // prev that will be added to mid
			int mid = 1; // mid is the current
			int fwd = mid; // initially forward will be the same as mid
			int sumEvn = 0;

			cout << "Fibonacci #s below " << fibLimit <<  " are: ";
			while ((mid + prev) <= fibLimit) {
				fwd = mid + prev;
				prev = mid;
				mid = fwd;
				cout << mid << " ";

				if ((fwd % 2) == 0) sumEvn +=fwd; // Too expensive... need to figure out another way
			}
			cout << "\n";
			cout << "Sum of Even Fibonacci's above: " << sumEvn << "\n\n";
		}

};




#endif /* MATH_FIBONACCI_FIBONACCI_H_ */
