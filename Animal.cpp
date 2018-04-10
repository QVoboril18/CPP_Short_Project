#include "Animal.h"
#include <string.h>

Animal :: Animal(int size_val, string name_val)
{
	size = size_val;
	name = name_val;

}

void Animal :: eat()
{
	size += 1;
}

int Animal :: get_size() const
{
	return size;	
}

int Animal :: get_name() const
{
	return name;
}

