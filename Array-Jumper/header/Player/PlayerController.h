#pragma once

 namespace Player
{
	 class PlayerModel;
	 class PlayerView;
	 enum class PlayerState;
	 class PlayerController
	 {
	 private:
		

		 PlayerModel* player_model;
		 PlayerView* player_view;
		 void destory();

	 public:
		 PlayerController();
		 ~PlayerController();


		 void initialize();
		 void update();
		 void render();

		 PlayerState getPlayerState();
		 void setPlayerState(PlayerState newPlayerState);
		


	};

}

