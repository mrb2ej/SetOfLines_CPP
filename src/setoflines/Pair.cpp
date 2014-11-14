#include "Pair.hpp"

Pair::Pair(Point* first, Point* second)
{
	if (first.getDimension() != second.getDimension()){
		// throw new Exception("Point dimensions do not match!");
	}

	this->first = first;
	this->second = second;
}

Point* Pair::getFirst()
{
	return this->first;
}

void Pair::setFirst(Point* first)
{
	if (first.getDimension() != this->second.getDimension()){
		// throw new Exception("Point dimensions do not match!");
	}

	this->first = first;
}

Point* Pair::getSecond()
{
	return this->second;
}

void Pair::setSecond(Point* second)
{

	if (this->first.getDimension() != second.getDimension()){
		//throw new Exception("Point dimensions do not match!");
	}

	this->second = second;
}