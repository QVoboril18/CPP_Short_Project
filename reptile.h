#ifndef _REPTILE_H
#define _REPTILE_H

#include "Animal.h"
#include <string.h>



class Reptile
{
public:
	Reptile(Animal a, bool isRep); // constructs reptile
	Animal getAnimal() const; //returns animal
private:
	Animal ani;
	bool isRep; 
};

#endif