#include "PotentialLine.hpp"

PotentialLine::PotentialLine()
{	
}

Line* PotentialLine::get_line()
{
	return this->line;
}

int PotentialLine::get_num_unused_points()
{
	return this->num_unused_points;
}

Bucket* PotentialLine::get_bucket()
{
	return this->bucket;
}