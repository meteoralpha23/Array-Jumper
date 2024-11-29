#include "../../header/Player/PlayerModel.h"

namespace Player
{

	PlayerState Player::PlayerModel::getPlayerState()
	{
		return PlayerState();
	}

	void PlayerModel::setPlayerState(PlayerState newPlayerState)
	{
		playerState = newPlayerState;

	}

	int PlayerModel::getCurrentPosition()
	{
		return 0;
	}

	void PlayerModel::setCurrentPosition(int newPosition)
	{
		currentPosition = newPosition;
	}

}
