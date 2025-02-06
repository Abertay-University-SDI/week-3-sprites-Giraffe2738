#include "Player.h"
#include <iostream>

Player::Player()
{

	texture.loadFromFile("gfx/coolDuck.png");

	setTexture(&texture);
	setSize(sf::Vector2f(100, 100));
	setPosition(100, 100);
}
Player::~Player()
{

}


void Player::handleInput(float dt)
{
	/*
	if (input->isPressed(sf::Keyboard::W))
	{
		setPosition(xPos, yPos -= 1);
	}
	if (input->isPressed(sf::Keyboard::A))
	{
		setPosition(xPos -= 1, yPos);
	}
	if (input->isPressed(sf::Keyboard::S))
	{
		setPosition(xPos, yPos += 1);
	}
	if (input->isPressed(sf::Keyboard::D))
	{
		setPosition(xPos += 1, yPos);
	}
	*/

	if (input->isPressed(sf::Keyboard::Q))
	{
		setPosition(900, 600);
		setSize(sf::Vector2f(100, 100));
	}
	if (input->isPressed(sf::Keyboard::W))
	{
		setPosition(950, 525);
		setSize(sf::Vector2f(120, 120));
	}
	if (input->isPressed(sf::Keyboard::E))
	{
		setPosition(1000, 450);
		setSize(sf::Vector2f(140, 140));
	}
	if (input->isPressed(sf::Keyboard::R))
	{
		setPosition(1000, 375);
		setSize(sf::Vector2f(160, 160));
	}
	if (input->isPressed(sf::Keyboard::T))
	{
		setPosition(950, 300);
		setSize(sf::Vector2f(180, 180));
	}
	if (input->isPressed(sf::Keyboard::Y))
	{
		setPosition(900, 225);
		setSize(sf::Vector2f(200, 200));
	}
	if (input->isPressed(sf::Keyboard::U))
	{
		setPosition(850, 150);
		setSize(sf::Vector2f(220, 220));
	}
	if (input->isPressed(sf::Keyboard::I))
	{
		setPosition(800, 75);
		setSize(sf::Vector2f(240, 240));
	}
	if (input->isPressed(sf::Keyboard::O))
	{
		setPosition(725, 50);
		setSize(sf::Vector2f(260, 260));
	}
	if (input->isPressed(sf::Keyboard::P))
	{
		setPosition(650, 25);
		setSize(sf::Vector2f(280, 280));
	}




	if (input->isPressed(sf::Keyboard::A))
	{
		setPosition(600, 50);
		setSize(sf::Vector2f(300, 300));
	}
	if (input->isPressed(sf::Keyboard::S))
	{
		setPosition(525, 75);
		setSize(sf::Vector2f(320, 320));
	}
	if (input->isPressed(sf::Keyboard::D))
	{
		setPosition(450, 100);
		setSize(sf::Vector2f(340, 340));
	}
	if (input->isPressed(sf::Keyboard::F))
	{
		setPosition(400, 150);
		setSize(sf::Vector2f(350, 350));
	}
	if (input->isPressed(sf::Keyboard::G))
	{
		setPosition(350, 200);
		setSize(sf::Vector2f(360, 360));
	}
	if (input->isPressed(sf::Keyboard::H))
	{
		setPosition(300, 250); 
		setSize(sf::Vector2f(370, 370));
	}
	if (input->isPressed(sf::Keyboard::J))
	{
		setPosition(250, 300);
		setSize(sf::Vector2f(380, 380));
	}
	if (input->isPressed(sf::Keyboard::K))
	{
		setPosition(200, 350);
		setSize(sf::Vector2f(390, 390));
	}
	if (input->isPressed(sf::Keyboard::L))
	{
		setPosition(150, 400);
		setSize(sf::Vector2f(400, 400));
	}




	if (input->isPressed(sf::Keyboard::Z))
	{
		setPosition(200, 450);
		setSize(sf::Vector2f(410, 410));
	}
	if (input->isPressed(sf::Keyboard::X))
	{
		setPosition(250, 500);
		setSize(sf::Vector2f(420, 420));
	}
	if (input->isPressed(sf::Keyboard::C))
	{
		setPosition(300, 450);
		setSize(sf::Vector2f(430, 430));
	}
	if (input->isPressed(sf::Keyboard::V))
	{
		setPosition(350, 400);
		setSize(sf::Vector2f(440, 440));
	}
	if (input->isPressed(sf::Keyboard::B))
	{
		setPosition(450, 325);
		setSize(sf::Vector2f(450, 450));
	}
	if (input->isPressed(sf::Keyboard::N))
	{
		setPosition(500, 250);
		setSize(sf::Vector2f(460, 460));
	}
	if (input->isPressed(sf::Keyboard::M))
	{
		setPosition(550, 200);
		setSize(sf::Vector2f(470, 470));
	}
}