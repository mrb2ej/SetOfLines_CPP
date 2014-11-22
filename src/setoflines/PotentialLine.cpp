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

size_t PotentialLine::hash() const
{
	return this->line->get_initial_point()->hash() ^ this->line->get_second_point()->hash();
}
