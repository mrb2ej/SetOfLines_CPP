#include "Line.hpp"

Line::Line(Point* initial_point, Point* second_point)
{
	this->initial_point = initial_point;
	this->second_point = second_point;

	this->all_points = new vector<Point*>();
}

Line::Line(Line* line)
{
	this->initial_point = line->get_initial_point();
	this->second_point = line->get_second_point();
	this->all_points = new vector<Point*>(line->get_all_points());
	this->num_points = line->get_num_points();
}

void Line::add_point(Point* point, bool direction)
{
	if (this->direction == RIGHT){
		all_points.add(point);
	}
	else{
		all_points.add(0, point);
	}

	this->num_points++;
}

vector<Point*> Line::get_all_points()
{
	return this->all_points;
}

Point* Line::get_initial_point()
{
	return this->initial_point;
}

void Line::set_initial_point(Point* initial_point)
{
	this->initial_point = initial_point;
}

Point* Line::get_second_point()
{
	return this->second_point;
}

void Line::set_second_point(Point* second_point)
{
	this->second_point = second_point;
}

int Line::get_num_points()
{
	return this->num_points;
}

void Line::set_num_points()
{
	this->num_points = num_points;
}
// compareTo, toString