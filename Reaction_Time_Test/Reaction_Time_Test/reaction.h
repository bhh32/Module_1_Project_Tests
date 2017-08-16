#ifndef REACTION_H
#define REACTION_H
#pragma once

class React
{
public:
	React(); // This is the constructor

	// Variables

	// Functions	
	float GetTimerTime();	
	float GetPlayerReactTime();
	void ResetTime();

	~React(); // This is the destructor

private:
	// Variables
	float time = 0.000f;
	float playerReactTime = 0.000f;
	
	// Functions
	void SetTimerTime(float x); // Sets the game timer
	void SetPlayerReactTime(float x); // Sets the players reaction time
};
	
#endif REACTION_H
