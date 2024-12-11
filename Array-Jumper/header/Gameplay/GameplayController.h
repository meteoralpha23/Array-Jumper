#pragma once
#include "../../header/Level/BlockType.h"
namespace Gameplay
{
	class GameplayController
	{
	private:

		void processObstacle();
		bool isObstacle(Level::BlockType value);
		
	public:
		void intialize();
		void update();
		void render();
		void onPositionChanged(int position);
		

	};

}