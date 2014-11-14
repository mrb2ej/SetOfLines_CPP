#ifndef PAIR_H
#define PAIR_H

using namespace std;

class Pair
{

public:
	Point* first;
	Point* second;

	Pair(Point* first, Point* second);
	Point* get_first();
	void set_first(Point* first);
	Point* get_second();
	void set_second(Point* second);
	
	// equals, hashCode
	
private:
	

};

#endif