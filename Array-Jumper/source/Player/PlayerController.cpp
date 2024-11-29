#include "../../header/Player/PlayerController.h"
#include "../../header/Player/PlayerView.h"
#include "../../header/Player/PlayerModel.h"

namespace Player {
	
	PlayerController::PlayerController()
	{
		player_model = new PlayerModel();
		player_view = new PlayerView(this);

	}



	void PlayerController::destory()
	{
		delete (player_model);
		delete (player_view);
	} 

	PlayerController::~PlayerController()
	{
		destory();
	}

	void PlayerController::initialize()
	{
		player_model->initialize();
		player_view->initialize();
	}

	void PlayerController::update()
	{
		player_view->update();
	}

	void PlayerController::render()
	{
		player_view->render();
	}

	PlayerState PlayerController::getPlayerState()
	{
		return player_model->getPlayerState();
	}

	void PlayerController::setPlayerState(PlayerState newPlayerState)
	{
		player_model->setPlayerState(newPlayerState);
	}


	






}
