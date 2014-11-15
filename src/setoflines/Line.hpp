#ifndef LINE_H
#define LINE_H

using namespace std;

#include <vector>
#include <cstddef>
#include "Point.hpp"

class Line
{
public:
	Line(Point* initial_point, Point* second_point);
	Line(Line* line);
	void add_point(Point* point, bool direction);
	vector<Point*> get_all_points();
	Point* get_initial_point();
	void set_initial_point(Point* initial_point);
	Point* get_second_point();
	void set_second_point(Point* second_point);
	int get_num_points();
	void set_num_points();
	// compareTo, toString


private:	
	static bool const LEFT = false;   //final?
	static bool const RIGHT = true;   // final?
	
	Point* initial_point;
	Point* second_point;

	int num_points;

	vector<Point*> all_points;
	
};

#endif
