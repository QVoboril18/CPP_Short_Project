#ifndef _MAMMAL_H
#define _MAMMAL_H

#include "Animal.h"
#include <string.h>



class Mammal
{
public:
	Mammal(Animal a, bool isM);
	Animal getAnimal() const;
private:
	Animal ani;
	bool isMam; 
};

#endif


