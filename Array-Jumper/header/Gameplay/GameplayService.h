#pragma once
#include "GameplayController.h"
namespace Gameplay
{
	
	class GameplayService
	{
	private:
		
		GameplayController* gameplay_controller;

	public:
		GameplayService();
		~GameplayService();
		void intialize();
		void update();
		void render();

		void onPositionChanged(int position);
	};
}