
#pragma once
#include "../../header/UI/UIElement/ImageView.h"
namespace Player
{

	enum class PlayerState
	{
		ALIVE,
		DEAD
	};
	class PlayerModel
	{
	public:

		PlayerState playerState;
		int currentPosition;

		PlayerState getPlayerState();

		void setPlayerState(PlayerState newPlayerState);

		int getCurrentPosition();

		void setCurrentPosition(int newPosition);

		void initialize();
		void update();
		void render();


	};

}
