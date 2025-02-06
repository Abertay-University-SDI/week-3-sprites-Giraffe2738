#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	playerName.setInput(input);

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	playerName.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	playerName.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(playerName);

	endDraw();
}
