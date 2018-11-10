/*
 * MathObject.h
 *
 *  Created on: Nov 8, 2018
 *      Author: frank.martens
 */

#ifndef MATH_MATHOBJECT_H_
#define MATH_MATHOBJECT_H_

#include "../peDebug.h"

// Purely a math object that will get inherited
class MathObject {
	private:

	public:
		MathObject() {
			// does nothing
		}
		MathObject(int nSomeVal) {
			// does nothing
		}
		virtual ~MathObject() {
			// does nothing
		}
		virtual void findAndSumMultiples() = 0;
};


#endif /* MATH_MATHOBJECT_H_ */
