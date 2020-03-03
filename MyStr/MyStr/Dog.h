
#pragma once
#include <iostream>
#include "Interface.h"
class Dog : public Interface
{
public:
	void say()
	{
		std::cout << "Woof ";
	}
};

