// InputManager.cpp
// November 27, 2017
// This is the input manager class. This checks for any input from the user.
// Created by:
// 				Jim Samson(jasamson@alaska.edu)

#include "../include/InputManager.hpp"

// Input() constructor
// See header for more documentation.
Input::Input() {
	display_ = make_unique<Display>();
}

// mouseOverObject() function
// See header for more documentation.
void Input::mouseOverObject()
{

}

// clickOnSprite() constructor
// See header for more documentation.
bool Input::clickOnSprite(sf::Sprite, int, int) {
	return true; // Dummy function
}