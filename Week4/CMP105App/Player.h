#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"
class Player : public GameObject
{
public:
	Player();
	~Player();
	
	int xPos = 100;
	int yPos = 100;
	sf::Texture texture;

	void handleInput(float dt);
	

};