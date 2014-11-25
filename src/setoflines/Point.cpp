#include "Point.hpp"

Point::Point(int dimension, vector<double>* position)
{
	this->dimension = dimension;
	this->coordinates = new vector<double>();

	for (int i = 0; i < position->size; i++){
		coordinates[i] = position.at(i);
	}
}

int Point::get_dimension() const
{
	return this->dimension;
}

void Point::set_dimension(int dimension)
{
	this->dimension = dimension;
}

vector<double>* Point::get_coordinates() const
{
	return this->coordinates;
}

void Point::set_coordinates(vector<double>* position)
{
	this->coordinates = new vector<double>*();

	for (int i = 0; i < position->size; i++){
		coordinates[i] = position.at(i);
	}
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


union double_longlong {
	long long i;
	double d;
};

long long double_to_long_long(double in)
{
	double_longlong dl;
	dl.d = in;
	return dl.i;
}


size_t Point::hash() const
{
	long long hash = 0;
	for(int i = 0; i < this->get_dimension(); i++) {
		hash = (hash + (324723947 + double_to_long_long(this->get_coordinates()[i]))) ^93485734985;
	}
	return hash;
}

