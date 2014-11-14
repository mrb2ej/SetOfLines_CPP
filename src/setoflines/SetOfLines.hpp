#ifndef SETOFLINES_H
#define SETOFLINES_H

#include<vector>
#include<unordered_set>
#include "Point.hpp"
#include "Pair.hpp"
#include "Line.hpp"
#include "PotentialLine.hpp"
#include "Bucket.hpp"


using namespace std;

class SetOfLines
{
public:
	SetOfLines(vector<Point*> point_set, double epsilon, int dimension);
	SetOfLines(vector<Point*> point_set, int dimension);
	vector<Line*> get_set_of_lines();
	double get_epsilon();


private:
	//==========================
	// Fields
	//==========================
	final bool LEFT = false;
	final bool RIGHT = true;

	double epsilon;
	int dimension;

	unordered_set<Pair*> unmarked_pairs = new unordered_set<Pair*>();
	vector<Line*> maximal_lines = new vector<Line*>();
	vector<Line*> set_of_lines = new vector<Line*>();

	// TODO: KDTree kdtree;

	//=========================
	// Methods
	//=========================
	void generate_set_of_lines(vector<Point*> point_set);
	void greedy_select_lines(vector<Point*> point_set,
		vector<PotentialLine*> potential_lines,
		Bucket* front_bucket);
	Bucket* generate_list_of_buckets(vector<PotentialLine*> potential_lines);
	Line* select_line(Bucket* front_bucket);
	unordered_set<Point*, vector<PotentialLine*>> populate_unused_points(vector<Point*> point_set, vector<PotentialLine*> potential_lines);
	void generate_maximal_lines();
	// TODO: void populate_tree(KDTree kdtree, vector<Point*> point_set);
	void generate_pairs(vector<Point*> point_set);
	void initialize(Line* working_set);
	void remove_opposite_end(Line* working_set, bool direction);
	void march(Line* working_set, bool direction);
	void update_auxlist(vector<Line*> auxlist, Line* working_set);
	bool extend(Line* working_set, bool direction);
	bool fits_the_line(Point* next_point, Line* working_set, bool direction);
	void mark_pair(Point* first, Point* second);
	void marx_auxlist(vector<Line*> auxlist);
	void mark_line(Line* line);
	Point* get_next_point(Point* next_point_guess);
	Point* get_next_point_guess(Line* working_set, bool direction);
	Pair* closest_pair(vector<Point*> point_set);
	Pair* closest_pair_helper(vector<vector<Point*>> sorted_points);
	Pair* brute_force_closest_pair(vector<Point*> point_set);
	vector<Point*> sort_points_by_dimension(vector<Point*> point_set, final int dim);
	double chebyshev_distance(Pair* p);
	double chebyshev_distance(Point* p1, Point* p2);
	double dynamically_select_epsilon(vector<Point*> point_set);

};
#endif