#include "tic_tac_toe.h"
using std::cin;
using std::cout;

int main() 
{
	TicTacToe game;
	string player1;
	char choice;
	
	

	do {
		cout<<"Player 1 choose 'X' or 'O': ";
		cin>>player1;

		game.start_game(player1);

		while (!game.game_over()) {
            int position;
            std::cout << "Enter position (1-9): ";
            std::cin >> position;
            game.mark_board(position);
            game.display_board();
        }

		
		cout<<'\n';
		cout<<"Would you like to continue (y/n)?: ";
		cin>>choice;

	}while(choice == 'y' || choice == 'y');

	return 0;
}