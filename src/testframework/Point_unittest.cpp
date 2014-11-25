#include "Point_unittest.hpp"

int Point_unittest::main()
{
	run_all_tests();
}

bool Point_unittest::run_all_tests()
{
	bool creation = creation_test();
	cout << "Test: Creating Point test: " << creation << endl;
		
	bool dimension = dimension_test();
	cout << "Test: dimension checking test: " << dimension << endl;
		
	bool coordinates = coordinates_test();
	cout << "Test: coordinates checking test: " << coordinates << endl;
	
	bool addition = addition_test();
	cout << "Test: point addition test: " << addition << endl;
	
	bool subtraction = subtraction_test();
	cout << "Test: point subtraction test: " << subtraction << endl;
	
	bool mult = multiplication_test();
	cout << "Test: scalar multiplication test: " << mult << endl;
	
	bool equals = equals_test();
	cout << "Test: operator== test: " << equals << endl;
}

bool Point_unittest::creation_test()
{
	Point* test = new Point(0, new vector<double>);
	Point* test2 = new Point(1, new vector<double>);
	Point* test3 = new Point(2, new vector<double>);

	return true;
}

bool Point_unittest::dimension_test()
{
	Point* test = new Point(3, new vector<double>);
	bool getWorks = (test->get_dimension() == 3);

	test->set_dimension(5);
	bool setWorks = (test->get_dimension() == 5);

	return getWorks && setWorks;
}

bool Point_unittest::coordinates_test()
{
	double coords[] = { 1.0, 2.0, 3.0 };
	double coords2[] = { 2.0, 3.0, 4.0 };

	vector<double>* testCoords = new vector<double>(coords, coords + sizeof(coords) / sizeof(double) );
	vector<double>* testCoords2 = new vector<double>(coords2, coords2 + sizeof(coords2) / sizeof(double));
	
	Point* test = new Point(3, testCoords);
	vector<double>* answer = test->get_coordinates();

	bool getWorks = true;
	for (int i = 0; i < 3; i++){
		if (!(double_equals(answer->at(i), testCoords->at(i)))){
			getWorks = false;
		}
	}
	
	test->set_coordinates(testCoords2);
	
	answer = test->get_coordinates();
	bool setWorks = true;
	for (int i = 0; i < 3; i++){
		if (!(double_equals(answer->at(i), testCoords2->at(i)))){
			getWorks = false;
		}
	}

	return getWorks && setWorks;
}

bool Point_unittest::addition_test()
{

	double coords[] = { 1.0, 1.0, 1.0 };
	double coords2[] = { 2.0, 2.0, 2.0 };
	double coords3[] = { 3.0, 3.0, 3.0 };

	vector<double>* testCoords = new vector<double>(coords, coords + sizeof(coords) / sizeof(double));
	vector<double>* testCoords2 = new vector<double>(coords2, coords2 + sizeof(coords2) / sizeof(double));
	vector<double>* testCoords3 = new vector<double>(coords3, coords3 + sizeof(coords3) / sizeof(double));

	Point* test = new Point(3, testCoords);
	Point* test2 = new Point(3, testCoords2);
	Point* testSum = new Point(3, testCoords3);

	// Note: this will also test operator==
	return (test->add(test2) == testSum);
}

bool Point_unittest::subtraction_test()
{
	double coords[] = { 1.0, 1.0, 1.0 };
	double coords2[] = { 2.0, 2.0, 2.0 };
	double coords3[] = { 3.0, 3.0, 3.0 };

	vector<double>* testCoords = new vector<double>(coords, coords + sizeof(coords) / sizeof(double));
	vector<double>* testCoords2 = new vector<double>(coords2, coords2 + sizeof(coords2) / sizeof(double));
	vector<double>* testCoords3 = new vector<double>(coords3, coords3 + sizeof(coords3) / sizeof(double));

	Point* test = new Point(3, testCoords);
	Point* test2 = new Point(3, testCoords2);
	Point* testSum = new Point(3, testCoords3);

	// Note: this will also test operator==
	return (testSum->subtract(test2) == test);
}

bool Point_unittest::multiplication_test()
{
	double coords[] = { 1.0, 2.0, 4.0 };
	double coords2[] = { 2.0, 4.0, 8.0 };
	
	vector<double>* testCoords = new vector<double>(coords, coords + sizeof(coords) / sizeof(double));
	vector<double>* testCoords2 = new vector<double>(coords2, coords2 + sizeof(coords2) / sizeof(double));
	
	Point* test = new Point(3, testCoords);
	Point* testMult = new Point(3, testCoords2);

	// Note: this will also test operator==
	return (test->scalar_mult(2.0) == testMult);
}

bool Point_unittest::equals_test()
{
	double coords[] = { 1.0, 2.0, 4.0 };
	double coords2[] = { 1.0, 2.0, 4.0 };

	vector<double>* testCoords = new vector<double>(coords, coords + sizeof(coords) / sizeof(double));
	vector<double>* testCoords2 = new vector<double>(coords2, coords2 + sizeof(coords2) / sizeof(double));

	Point* test = new Point(3, testCoords);
	Point* test2 = new Point(3, testCoords2);

	return (test == test2);
}

bool double_equals(double a, double b, double epsilon = 0.001){
	return std::abs(a - b) < epsilon;
}