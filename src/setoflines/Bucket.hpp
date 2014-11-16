#ifndef BUCKET_H
#define BUCKET_H

using namespace std;

#include <unordered_set> 
#include <cstddef>
#include "PotentialLine.hpp"

//class PotentialLine; //Foward Decleration

class Bucket
{

public:
	Bucket(int value);
	void set_previous_bucket(Bucket* b);
	void set_next_bucket(Bucket* b);
	Bucket* get_previous_bucket();
	Bucket* get_next_bucket();
	int get_value();
	void add_line(PotentialLine* p1);
	void remove_line(PotentialLine* p1);
	PotentialLine* get_potential_line();
	bool empty();


private:
	int value;
	Bucket* previous_bucket;
	Bucket* next_bucket;
	std::unordered_set<PotentialLine*, hash_potential_line, equals_potential_line> potential_lines;

};

#endif 
