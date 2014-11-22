#ifndef POINT_H
#define POINT_H

#include <vector>
#include <cstddef>

using namespace std;

class Point
{

public:
	Point(int dimension, vector<double>* position);
	int get_dimension() const;
	void set_dimension(int dimension);
	vector<double> get_coordinates() const;
	void set_coordinates(vector<double> position);
	Point* add(Point* p1);
	Point* scalar_mult(double scalar);
	Point* subtract(Point* p1);
	bool operator==(const Point& other) const;
	size_t hash() const;
	// hashCode and toString


private:
	int dimension;
	vector<double> coordinates;

};

struct hash_point {
        size_t operator()(const Point* p) const {
                return p->hash();;
        }
};

struct equals_point {
        bool operator()(const Point* p1, const Point* p2) const {
                return *(p1) == *(p2);
        }
};

#endif
