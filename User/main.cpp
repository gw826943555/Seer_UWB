#include "stm32f4xx.h"
#include "timer.h"
#include "cled.h"

int main(void)
{
	BaseTimer::Instance()->initialize();
	Timer HeartBeat(500,500);
	while(1)
	{
		if(HeartBeat.isAbsoluteTimeUp())
		{
			LED::Instance()->Toggle();
		}
	}
}

