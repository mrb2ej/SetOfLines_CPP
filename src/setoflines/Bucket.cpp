#include "Bucket.hpp"

Bucket::Bucket(int value)
{
	this->value = value;
	this->previous_bucket = NULL;
	this->next_bucket = NULL;
}

void Bucket::set_previous_bucket(Bucket* b)
{
	this->previous_bucket = b;
}

void Bucket::set_next_bucket(Bucket* b)
{
	this->next_bucket = b;
}

Bucket* Bucket::get_previous_bucket()
{
	return this->previous_bucket;
}

Bucket* Bucket::get_next_bucket()
{
	return this->next_bucket;
}

int Bucket::get_value()
{
	return this->value;
}

void Bucket::add_line(PotentialLine* p1)
{
	this->potential_lines.insert(p1);
}

void Bucket::remove_line(PotentialLine* p1)
{
	this->potential_lines.erase(p1);
}

PotentialLine* Bucket::get_potential_line()
{
	// TODO: return this->potential_lines.iterator()->next();
	return NULL;
}

bool Bucket::empty()
{
	return this->potential_lines.empty();
}
