#include <iostream>
#include "reaction.h"

React::React()
{
	printf("This is the constructor!\n");
}

void React::SetTimerTime(float x)
{
	React::time = x;
}

float React::GetTimerTime()
{
	return React::time;
}

void React::SetPlayerReactTime(float x)
{
	React::playerReactTime = x;
}

float React::GetPlayerReactTime()
{
	return React::playerReactTime;
}

void React::ResetTime()
{
	SetTimerTime(0.000f);
	SetPlayerReactTime(0.000f);
}

React::~React()
{
	printf("This is the destructor!\n");
}