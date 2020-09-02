#pragma once

class Animal
{
public:
	Animal();
	const char* GetName();
	virtual const char* MakeNoise();

protected:
	const char* name;
};
