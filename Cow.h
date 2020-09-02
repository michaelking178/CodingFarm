#pragma once
#include "Animal.h"

class Cow : public Animal
{
public:
	Cow();
	const char* MakeNoise() override;

private:

};

