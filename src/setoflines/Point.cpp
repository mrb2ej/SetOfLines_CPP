#include "Point.hpp"

Point::Point(int dimension, vector<double>)
{
	this->dimension = dimension;
	this->coordinates = new vector<double>(position);
}

int Point::get_dimension()
{
	return this->dimension;
}

void Point::set_dimension(int dimension)
{
	this->dimension = dimension;
}

vector<double> Point::get_coordinates()
{
	return this->coordinates;
}

void Point::set_coordinates(vector<double> position)
{
	this->coordinates = position;
}

Point* Point::add(Point* p1)
{
	vector<double> coordinates = new vector<double>();
	for (int i = 0; i < this->getDimension(); i++) {
		coordinates.push_back(this->getCoordinates()->at(i) + p1->getCoordinates()->at(i));
	}

	return new Point(this->getDimension(), coordinates);
}

Point* Point::scalar_mult(double scalar)
{
	vector<double> new_coordinates = new vector<double>();
	for (double coordinate : this->coordinates) {
		new_coordinates.push_back(coordinate * scalar);
	}

	return new Point(this->dimension, new_coordinates);
}

Point* Point::subtract(Point* p1)
{
	vector<double> coordinates = new vector<double>();
	for (int i = 0; i < this->getDimension(); i++) {
		coordinates.push_back(this->getCoordinates()->at(i) - p1->getCoordinates()->at(i));
	}

	return new Point(this->getDimension(), coordinates);
}

bool Point::operator==(const Point& other) const {
    if(this->getDimension() != other->getDimension()) return false;
    for(int i = 0; i < this->getDimension(); i++) {
        if(this->getCoordinates()->[i] != other->getCoordinates->[i]) return false;
    }
    return true;
}
// HashCode and toString()  