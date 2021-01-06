#ifndef SS_UI_MAIN_MENU_H_
#define SS_UI_MAIN_MENU_H_

#include <GameMenu/GameMenu.h>
#include <SFML/Graphics.hpp>

namespace game {

	class MainMenu {
	public:


		void start(sf::RenderWindow *w);
	private:
		
		gmenu::MenuItem menuItems[4];
		gmenu::Action *action[4];

		char MenuText[4][15] = {
			"Start",
			"High Score",
			"Options",
			"Exit"
		};
	};

	
	class StartGameAction : public gmenu::Action {
	public:
		StartGameAction( sf::RenderWindow * );
		bool start();
	private:
		sf::RenderWindow *window;
	};
	class HighScoreAction : public gmenu::Action {
	public:
		HighScoreAction( sf::RenderWindow * );
		bool start();
	private:
		sf::RenderWindow *window;
	};
	class OptionsAction : public gmenu::Action {
	public:
		OptionsAction( sf::RenderWindow * );
		bool start();
	private:
		sf::RenderWindow *window;
	};
	
	
	
	class ExitAction : public gmenu::Action {
	public:
		ExitAction( sf::RenderWindow * );
		bool start();
	private:
		bool getConfirmation();

		sf::RenderWindow *window;

		class ConfirmationMenuAction : public gmenu::Action {
			bool *confirm;
		public:
			ConfirmationMenuAction( bool *val ) {
				confirm = val;
			}
			bool start() {
				*confirm = true;
				return false;
			}
		};
		/* bool start() returns false in both case so that the dialog
		will be closed after the action is selected */
		class DeclineMenuAction : public gmenu::Action {
			bool *confirm;
		public:
			DeclineMenuAction( bool *val ) {
				confirm = val;
			}
			bool start() {
				*confirm = false;
				return false;
			}
		};
	};
	
}
// CREATED BYKHAIRA NABILA
#endif // !SS_UI_MAIN_MENU_H_
