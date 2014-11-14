#ifndef PAIR_H
#define PAIR_H

using namespace std;

class Pair
{

public:
	Point* first;
	Point* second;

	Pair(Point* first, Point* second);
	Point* getFirst();
	void setFirst(Point* first);
	Point* getSecond();
	void setSecond(Point* second);
	
	// equals, hashCode
	
private:
	

};

#endif