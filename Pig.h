#pragma once
#include "Animal.h"

class Pig : public Animal
{
public:
	Pig();
	const char* MakeNoise() override;

private:

};

