#ifndef PAIR_H
#define PAIR_H

using namespace std;

#include "Point.hpp"
#include <cstddef>

class Pair
{

public:
	Point* first;
	Point* second;

	Pair(Point* first, Point* second);
	Point* get_first() const;
	void set_first(Point* first);
	Point* get_second() const;
	void set_second(Point* second);
	size_t hash() const;
	// equals, hashCode
	
private:
	

};

struct hash_pair {
        size_t operator()(const Pair* p) const {
                return p->hash();
        }
};

struct equals_pair {
        bool operator()(const Pair* p1, const Pair* p2) const {
                if((*(p1->first) == *(p2->first)) && (*(p1->second) == *(p2->second))) return true;
		if((*(p1->first) == *(p2->second)) && (*(p1->second) == *(p2->first))) return true;
		return false;
        }
};

#endif
