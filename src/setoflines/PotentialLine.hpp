#ifndef POTENTIALLINE_H
#define POTENTIALLINE_H

using namespace std;

#include "Line.hpp"
#include <cstddef>
//#include "Bucket.hpp"

class Bucket;  // Foward Decleration 

class PotentialLine
{

public:
	PotentialLine();
	Line* get_line();
	int get_num_unused_points();
	Bucket* get_bucket();

private:
	Line* line;
	int num_unused_points;
	Bucket* bucket;

};

#endif