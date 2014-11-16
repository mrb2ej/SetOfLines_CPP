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

struct hash_potential_line {
	size_t operator()(const PotentialLine* pl) const {
		return 0;
	}
};

struct equals_potential_line {
	bool operator()(const PotentialLine* pl1, const PotentialLine* pl2) const {
		return pl1 == pl2;
	}
};

#endif
