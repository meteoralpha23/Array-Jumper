#include "../../header/Player/PlayerView.h"

namespace Player
{

	void PlayerView::calculatePlayerDimensions()
	{
		player_height = 1000.0f;
		player_width = 1000.0f;
			
	}

	void PlayerView::initializePlayerImage()
	{
		player_image->initialize(Config::character_texture_path,
		           	player_width,
			        player_height,
			        sf::Vector2f(0, 0));
	}
	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();
		initializePlayerImage();
	}
	void PlayerView::initialize()
	{
		game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}
	sf::Vector2f PlayerView::calulcatePlayerPosition()
	{
		return sf::Vector2f(0, 0);
	}
	PlayerView::PlayerView()
	{
		game_window = nullptr;
		player_image = new ImageView();
	}
	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calulcatePlayerPosition());
	}
	void PlayerView::drawPlayer()
	{
		player_image->render();
	}
	
	PlayerView::~PlayerView() {}

	void PlayerView::initialize()
	{
		//Yet to Implement
	}

	void PlayerView::update()
	{
		//Yet to implement
	}

	void PlayerView::render()
	{
		//Yet to implement
	}
}