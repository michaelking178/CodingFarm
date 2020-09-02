#include <iostream>
#include "Horse.h"
#include "Cow.h"
#include "Pig.h"

int main()
{
	Animal animal;
	Animal* horse = new Horse;
	Animal* cow = new Cow;
	Animal* pig = new Pig;

	std::cout << animal.GetName() << std::endl;
	std::cout << animal.MakeNoise() << std::endl;
	std::cout << std::endl;

	std::cout << horse->GetName() << std::endl;
	std::cout << horse->MakeNoise() << std::endl;
	std::cout << std::endl;

	std::cout << cow->GetName() << std::endl;
	std::cout << cow->MakeNoise() << std::endl;
	std::cout << std::endl;

	std::cout << pig->GetName() << std::endl;
	std::cout << pig->MakeNoise() << std::endl;

	delete horse, cow, pig;
}