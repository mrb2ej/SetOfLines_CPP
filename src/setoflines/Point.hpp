#ifndef POINT_H
#define POINT_H

#include <vector>

using namespace std;

class Point
{

public:
	Point(int dimension, vector<double> position);
	int get_dimension();
	void set_dimension(int dimension);
	vector<double> get_coordinates();
	void set_coordinates(vector<double> position);
	Point* add(Point* p1);
	Point* scalar_mult(double scalar);
	Point* subtract(Point* p1);
	bool operator==(const Point& other) const;
	
	// hashCode and toString


private:
	int dimension;
	vector<double> coordinates;

};

#endif