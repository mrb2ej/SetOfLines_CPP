#ifndef POINT_H
#define POINT_H

#include <vector>

using namespace std;

class Point
{

public:
	Point(int dimension, vector<double> position);
	int getDimension();
	void setDimension(int dimension);
	vector<double> getCoordinates();
	void setCoordinates(vector<double> position);
	Point* add(Point* p1);
	Point* scalarMult(double scalar);
	Point* subtract(Point* p1);
	bool operator==(const Point& other) const;
	
	// hashCode and toString


private:
	int dimension;
	vector<double> coordinates;

};

#endif