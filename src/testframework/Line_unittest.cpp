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
	return true;
}

bool Line_unittest::add_point_test()
{
	return true;
}

bool Line_unittest::copy_constructor_test()
{
	return true;
}

bool Line_unittest::getter_setter_test()
{
	return true;
}
