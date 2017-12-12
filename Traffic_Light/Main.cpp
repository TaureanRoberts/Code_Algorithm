#include <iostream>
#include "TrafficLight.h"

int main()
{
	TrafficLight *light = new TrafficLight;
	light->Update();
	system("pause");
}