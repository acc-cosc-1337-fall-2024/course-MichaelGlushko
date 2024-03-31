//cpp
#include"tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over() {
    return check_board_full();
}

void TicTacToe::start_game(string first_player) {
    if (first_player != "X" && first_player != "O") {
        cout<<"Invalid Input. Must be 'X' or 'O'.";
        return;
    }
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position-1] = player; 
    set_next_player();
}

string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    for (int i = 0; i < pegs.size(); i += 3) {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else { 
        player = "X";
    }
}

bool TicTacToe::check_board_full() {
    for (const auto& peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() {
    for (auto& peg : pegs) {
        peg = " ";
    }
}
