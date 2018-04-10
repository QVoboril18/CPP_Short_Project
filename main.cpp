#include <iostream.h>
#include <string.h>

#include "Reptile.h"
#include "Mammal.h"
#include "Animal.h"


int main(){

	Animal a = Animal(5, "lizzard")
	Animal b = Animal(100, "grizzley")

Reptile liz = Reptile(a, true);

Mammal griz = Mammal(b, true);


liz.getAnimal().eat();


cout << liz.getAnimal().get_size();

cout << griz.getAnimal().get_name();



}