#include "TrafficLight.h"

TrafficLight::TrafficLight()
{
	m_State = estate::init;
	m_State = estate::redlight;
	m_State = estate::greenlight;
	m_State = estate::yellowlight;
}

void TrafficLight::Update()
{
	while(m_State != estate::off)
	{
		cout << "Ticks passed: \n";
		cin >> m_ticks;
		switch(m_ticks)
		{
		case 0:
			if (m_State == estate::redlight)
			{
				m_State = estate::greenlight;
				break;
			}
		case 1:
			if (m_State == estate::greenlight)
			{
				m_State = estate::yellowlight;
				break;
			}
		case 2:
			if(m_State == estate::yellowlight)
			{
				m_State = estate::redlight;
				break;
			}
		default:
			if (m_State != estate::init)
			{
				m_State = estate::off;
			}
			cout << m_State << endl;
		}
	}
}
