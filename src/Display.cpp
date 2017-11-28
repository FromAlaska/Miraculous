// Display.cpp
// November 27, 2017
// This is the Display class. It handles the window function.
// Created by:
// 				Jim Samson(jasamson@alaska.edu)

#include "../include/Display.hpp"

// Display() Constructor
// See header for more documentation.
Display::Display() {
	loadTexture();

	window.create(sf::VideoMode(WINDOW_WIDTH,WINDOW_HEIGHT), "Miraculous", 
		sf::Style::Titlebar | sf::Style::Close);
	window.setFramerateLimit(60);
	setTexture();
}

// draw() function
// See header for more documentation.
void Display::draw() {
	window.clear(); // Keep this first.
	// Put objects in here!
	window.display(); // Keep this last.
}