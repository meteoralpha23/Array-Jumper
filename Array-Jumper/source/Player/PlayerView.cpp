#include "../../header/Player/PlayerView.h"
#include "../../header/Global/Config.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Player/PlayerModel.h"



using namespace Global;

enum class PlayerState;
namespace Player
{



	PlayerView::PlayerView(PlayerController* controller)
	{
		player_controller = controller;
		gameWindow = nullptr;
	}

	PlayerView::~PlayerView()

	{

	}





	



	void PlayerView::calculatePlayerDimensions()
	{
		playerWidth = 1000.0f;
		playerHeight = 1000.0f;


	}


	
	void PlayerView::initializePlayerImage()
	{

		player_image->initialize(Config::character_texture_path,
			                     playerWidth,
			                     playerHeight,
		                      	sf::Vector2f(0, 0));

	}

	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();
		initializePlayerImage();



	}

	void PlayerView::initialize()
	{
		ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();

	}

	sf::Vector2f PlayerView::calculatePlayerPosition()
	{
		return sf::Vector2f(0, 0);
	}

	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calculatePlayerPosition());
		

	}
	void PlayerView::update()
	{
		updatePlayerPosition();

	}
	void PlayerView::drawPlayer()
	{
		player_image->render();


	}


	void PlayerView::render()
	{
		switch (player_controller->getPlayerState())
		{
		case Player::PlayerState::ALIVE: // Fully qualify PlayerState with namespace
			drawPlayer();
			break;

		}
	}



}
