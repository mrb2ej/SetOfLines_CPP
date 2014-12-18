#include "Line_unittest.hpp"

int Line_unittest::main()
{
	run_all_tests();
}

bool Line_unittest::run_all_tests()
{
	cout << "Test: Creating Line test: " << creation_test() << endl;
	cout << "Test: Add point test: " << add_point_test() << endl;
	cout << "Test: Copy constructor test: " << copy_constructor_test() << endl;
	cout << "Test: Getter-setter test: " << getter_setter_test() << endl;
}

bool Line_unittest::creation_test()
{
	Line* line;
	for(int i = 1; i <= 10; i++)
	{
		line = create_line(i);
		delete line;
	}
	return true;
}

bool Line_unittest::add_point_test()
{
	Line* line;
	Point* left_point_to_add;
	Point* right_point_to_add;
	vector<Point*> points;

	for(int i = 1; i <= 10; i++)
	{
		line = create_line(i);
		left_point_to_add = create_point(i);
		right_point_to_add = create_point(i);

		line->add_point(left_point_to_add, Line::LEFT);
		line->add_point(right_point_to_add, Line::RIGHT);

		points = line->get_all_points();
		if(line->get_num_points() != 4) return false;
		if(points[0] != left_point_to_add) return false;
		if(points[3] != right_point_to_add) return false;
	}
	return true;
}

bool Line_unittest::copy_constructor_test()
{
	Line* line;
	Line* copy;
	vector<Point*> points;
	vector<Point*> copy_points;
	
	for(int i = 1; i <= 10; i++)
	{
		line = create_line(i);
		for(j = 0; j <= rand() % 100; j++)
		{
			line->add_point(create_point(i));
		}
		points = line->get_all_points();

		copy = new Line(line);
		copy_points = copy->get_all_points();

		if(line->get_num_points() != copy->get_num_points()) return false;
		for(int j = 0; j < line->get_num_points(); j++)
		{
			if(points[j] != copy_points[j]) return false;
		}
	}
	return true;
}

bool Line_unittest::getter_setter_test()
{
	return true;
}

Line* Line_unittest::create_line(int dimension)
{
	return new Line(create_point(dimension), create_point(dimension));
}

Point* Line_unittest::create_point(int dimension)
{
	vector<double>* coordinates = new vector<double>();
        for(int i = 0; i < dimension; i++)
        {
                coordinates->push_back(0);
        }
        return new Point(dimension, coordinates);
}
