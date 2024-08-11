#include <iostream>
#include "Bus.h"

//member functions
void Bus::accelerate()
{
	speed += 5;

}

void Bus::slowDown()
{
	speed -= 5;
	//makes sure speed is not negative
	if (speed <= 0)
	{
		speed = 0;
	}

}
