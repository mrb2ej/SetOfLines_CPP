#include "Pair.hpp"

Pair::Pair(Point* first, Point* second)
{
	if (first.getDimension() != second.getDimension()){
		// throw new Exception("Point dimensions do not match!");
	}

	this->first = first;
	this->second = second;
}

Point* Pair::get_first()
{
	return this->first;
}

void Pair::set_first(Point* first)
{
	if (first.getDimension() != this->second.getDimension()){
		// throw new Exception("Point dimensions do not match!");
	}

	this->first = first;
}

Point* Pair::get_second()
{
	return this->second;
}

void Pair::set_second(Point* second)
{
	if (this->first.getDimension() != second.getDimension()){
		//throw new Exception("Point dimensions do not match!");
	}

	this->second = second;
}