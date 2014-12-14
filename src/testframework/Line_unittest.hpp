#ifndef LINE_UNITTEST.H
#define LINE_UNITTEST.H

#include <iostream>
#include <cmath>
#include "../setoflines/Line.hpp"

using namespace std; 

class Line_unittest
{
public:
        int main();
        bool run_all_tests();

private:
        bool creation_test();
        bool add_point_test();
	bool copy_constructor_test();
	bool getter_setter_test();
	Line* create_line(int dimension);
	Point* create_point(int dimension);

};

#endif
