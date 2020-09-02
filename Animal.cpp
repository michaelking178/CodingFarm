#pragma once
#include "Animal.h"

Animal::Animal()
{
	name = "Animal";
}

const char* Animal::GetName() {
	return name;
}

const char* Animal::MakeNoise()
{
	return "ambiguous animal noise";
}