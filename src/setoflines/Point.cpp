#include "Point.hpp"

Point::Point(int dimension, vector<double>* position)
{
	this->dimension = dimension;
	// this->coordinates = new vector<double>(position);
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
	vector<double>* coordinates = new vector<double>;
	for (int i = 0; i < this->get_dimension(); i++) {
		coordinates->push_back(this->get_coordinates().at(i) + p1->get_coordinates().at(i));
	}

	return new Point(this->get_dimension(), coordinates);
}

Point* Point::scalar_mult(double scalar)
{
	vector<double>* new_coordinates = new vector<double>;
	for (double coordinate : this->coordinates) {
		new_coordinates->push_back(coordinate * scalar);
	}

	return new Point(this->dimension, new_coordinates);
}

Point* Point::subtract(Point* p1)
{
	vector<double>* coordinates = new vector<double>;
	for (int i = 0; i < this->get_dimension(); i++) {
		coordinates->push_back(this->get_coordinates().at(i) - p1->get_coordinates().at(i));
	}

	return new Point(this->get_dimension(), coordinates);
}

bool Point::operator==(const Point& other) const {
	/*
	if(this.get_dimension() != other.get_dimension()) return false;
    for(int i = 0; i < this.get_dimension(); i++) {
        if(this.get_coordinates().at(i) != other.get_coordinates.at(i)) return false;
    }
	*/
    return true;
}
// HashCode and toString()  
