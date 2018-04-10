#include "Reptile.h"

#include <string.h>

Reptile :: Reptile(Animal a , bool isM)
{
	ani = a;
	isM = isRep;
}
Animal Reptile :: getAnimal() const
{
return ani;
}