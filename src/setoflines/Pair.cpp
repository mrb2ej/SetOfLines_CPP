#include "Pair.hpp"

Pair::Pair(Point* first, Point* second)
{
	if (first->get_dimension() != second->get_dimension()){
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
	if (first->get_dimension() != this->second->get_dimension()){
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
	if (this->first->get_dimension() != second->get_dimension()){
		//throw new Exception("Point dimensions do not match!");
	}

	this->second = second;
}

