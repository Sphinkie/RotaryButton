/* 
Example for Rotary Button
*/

#include "RotaryButton.h"

Rotary  MyButton(25, 35); 

// *******************************************************************************
// The setup function runs once when you press reset or power the board
// *******************************************************************************
void setup() 
{
}

// *******************************************************************************
// The loop function runs over and over again forever
// *******************************************************************************
void loop() 
{
	MyButton.readPosition();

	// Has the button changed ?
	if (MyButton.hasChanged())
	{
		// Actions to do just after the button has changed.
		// First read the new position
		switch (MyButton.readPosition())
		{
		case 0: 
             break;
		case 1: 
             break;
		case 2: 
             break;
		}
	}
    else
	{
		// Actions to do just if the button has not changed.
		switch (MyButton.getValue())
		{
		case 0:
			break;
		case 1: 
			break;
		case 2:
			break;
	}
}

