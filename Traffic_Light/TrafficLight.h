#pragma once
#include <iostream>
using namespace std;

class TrafficLight
{
public:
	enum estate {init,redlight, yellowlight, greenlight, off};
	estate m_State;
	int m_ticks;
	TrafficLight();
	void Update();
};