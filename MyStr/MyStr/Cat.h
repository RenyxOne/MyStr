

#pragma once
#include <iostream>
#include "Interface.h"
class Cat : public Interface
{
public:
	void say()
	{
		std::cout << "Meow ";
	}
};

