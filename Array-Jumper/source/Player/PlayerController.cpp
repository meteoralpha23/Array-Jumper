#include "../../header/Player/PlayerController.h"
#include "../../header/Player/PlayerView.h"
#include "../../header/Player/PlayerModel.h"
#include "../../header/Player/MovementDirection.h"
#include "../../header/Event/EventService.h"
#include "../../header/Global/ServiceLocator.h"


namespace Player
{
	using namespace Global;
	using namespace Event;
	using namespace Level;
	using namespace Sound;
	PlayerController::PlayerController()
	{
		player_model = new PlayerModel();
		player_view = new PlayerView(this);
		
	}

	PlayerController::~PlayerController() { destroy(); }

	void PlayerController::initialize()
	{
		player_model->initialize();
		player_view->initialize();
		event_service = ServiceLocator::getInstance()->getEventService();
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

	void PlayerController::setPlayerState(PlayerState new_player_state)
	{
		player_model->setPlayerState(new_player_state);
	}

	void PlayerController::move(MovementDirection direction)
	{
		int steps,targtPosition;
		switch (direction)
		{
		case MovementDirection::FORWARD:
			steps = 1;
			break;

		case MovementDirection::BACKWARD:
			steps = -1;
			break;
		default:
			steps = 0;
			break;
		}
		targtPosition = player_model->getCurrentPosition() + steps;
		
	}

	void PlayerController::readInput()
	{
		if (event_service->pressedRightArrowKey() || event_service->pressedDKey())
		{
			move(MovementDirection::FORWARD);
		}
		if (event_service->pressedLeftArrowKey() || event_service->pressedAKey())
		{
			move(MovementDirection::BACKWARD);
		}

	}

	void PlayerController::destroy()
	{
		delete(player_model);
		delete(player_view);
	}
}