#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::cin;
using std::cout;

int main() 
{
	std::unique_ptr<TicTacToe> game;
	TicTacToeManager manager;
	string player1;
	char choice;
	string winner;
	int o, x, t;
	
	

	do {
		cout<<"Player 1 choose 'X' or 'O': ";
		cin>>player1;
		int game_size;

		do {
			
			cout<<"Enter a game size (3 for 3x3 board or 4 for 4x4 board)\n";
			cin>>game_size;
			if (game_size == 3) {
				game = std::make_unique<TicTacToe3>();
			} else if (game_size == 4) {
				game = std::make_unique<TicTacToe4>();
			} else {
				cout<<"Invalid game size.\n";
			}
		}while(game_size != 3 && game_size != 4);

		game->start_game(player1);

		while (!game->game_over()) {
            int position;
            std::cout << "Enter position (1-9): ";
            std::cin >> position;
            game->mark_board(position);
            game->display_board();
        }
		winner = game->get_winner();
		if (winner == "C") {
			cout << "It's a tie\n";
		} else {
			cout << winner << " wins!\n\n";
		}

		manager.save_game(game);
		manager.get_winner_total(o, x, t);
		cout<<"Scores:\n";
		cout<<"X wins "<<x<<", "<<"O wins "<<o<<", "<<"Ties "<<t<<"\n\n";


		cout<<"Would you like to continue (y/n)?: ";
		cin>>choice;

	}while(choice == 'Y' || choice == 'y');

	cout << "Exited Tic Tac Toe\n";

	return 0;
}

