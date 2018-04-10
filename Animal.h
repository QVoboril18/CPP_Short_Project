#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string.h>

class Animal
{
	public:
		Animal(int size_val, string name_val);
		void eat();
		int get_size() const;
		int get_name() const;

	private:
		int size;
		std::string name;

};


#endif
