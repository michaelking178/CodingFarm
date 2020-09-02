#pragma once
#include <iostream>
#include "CodingFarm.h"

CodingFarm::CodingFarm()
{
}

CodingFarm::~CodingFarm()
{
}

Animal CodingFarm::CreateAnimal()
{
	Animal animal;
	std::cout << animal.GetName() << std::endl;
	return animal;
}