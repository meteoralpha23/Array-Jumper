#pragma once


namespace Player
{
	enum class PlayerState
	{
		ALIVE,
		DEAD
	};

	class PlayerModel
	{
	private:

		

		PlayerState player_state;
		int current_position;
		

	public:

		void initialize();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);

		void resetPlayer();
		void resetPosition();
		int getCurrentPosition();
		void setCurrentPosition(int new_position);
		
	};
}