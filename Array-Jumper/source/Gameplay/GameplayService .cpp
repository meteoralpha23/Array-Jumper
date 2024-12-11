#include "../../header/Gameplay/GameplayService.h"

namespace Gameplay
{
	GameplayService::GameplayService()
	{
		gameplay_controller = new GameplayController();
	}
	GameplayService::~GameplayService()
	{
	}
	void Gameplay::GameplayService::intialize()
	{
		gameplay_controller->intialize();
	}

	void Gameplay::GameplayService::update()
	{
		gameplay_controller->update();
	}

	void Gameplay::GameplayService::render()
	{
		gameplay_controller->render();
	}
	void GameplayService::onDeath()
	{
		gameplay_controller->onDeath();
	}
	void GameplayService::onPositionChanged(int position)
	{
		gameplay_controller->onPositionChanged(position);
	}
}