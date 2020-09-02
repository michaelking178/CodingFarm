#pragma once
#include "Animal.h"

class Horse : public Animal
{
public:
	Horse();
	const char* MakeNoise() override;

private:

};

