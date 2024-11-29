
#pragma once
#include "../../header/UI/UIElement/ImageView.h" 
#include "../../header/Player/PlayerController.h"

namespace Player
{

	class PlayerView
	{

	private:
		UI::UIElement::ImageView* player_image;
		sf::RenderWindow* gameWindow;
		PlayerController* player_controller;
		float playerHeight;
		float playerWidth;

		void initializePlayerImage();
		void drawPlayer();
		void loadPlayer();
		void  calculatePlayerDimensions();
		void updatePlayerPosition();
		
		sf::Vector2f calculatePlayerPosition();

	public:
		PlayerView(PlayerController* controller);
		~PlayerView();

		void initialize();
		void update();
		void render();





	};

}