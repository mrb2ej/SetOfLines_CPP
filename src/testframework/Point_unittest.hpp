#ifndef POINT_UNITTEST.H
#define POINT_UNITTEST.H

#include <iostream>
#include <cmath>
#include "../setoflines/Point.hpp"

using namespace std; 

class Point_unittest
{
public:
	int main();
	bool run_all_tests();

private:
	bool creation_test();
	bool dimension_test();
	bool coordinates_test();
	bool addition_test();
	bool subtraction_test();
	bool multiplication_test();
	bool equals_test();
	bool double_equals(double a, double b, double epsilon = 0.001);

	// hash function ??


};

#endif