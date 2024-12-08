#pragma once
#include "../../header/Event/EventService.h"
#include "MovementDirection.h"
namespace Player
{
	class PlayerView;
	class PlayerModel;
	
	enum class PlayerState;
	
	class PlayerController
	{
	private:
		PlayerModel* player_model;
		PlayerView* player_view;
		Event::EventService* event_service;

		void destroy();

	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		void move(MovementDirection direction);
		void readInput();
	};
}