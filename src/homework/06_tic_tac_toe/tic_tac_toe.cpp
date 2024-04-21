//cpp
#include"tic_tac_toe.h"

using std::cout;


bool TicTacToe::game_over() {
    if (check_column_win() || check_row_win() || check_diagonal_win()) {
        set_winner();
        return true;
    }

    if (check_board_full() == true) {
        winner = "C";
        return true;
    }
    return false;
}

void TicTacToe::start_game(string player1) {
    while (player1 != "X" && player1 != "O" && player1 != "x" && player1 != "o") {
        cout<<"Invalid Input. Must be 'X' or 'O'.\n";
        return;
    }

    if (player1 == "x") {
        player1 = "X";
    } else if (player1 == "o") {
        player1 = "O";
    }
    player = player1;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position-1] = player; 
    set_next_player();
}

void TicTacToe::display_board() const {
    for (int i = 0; i < pegs.size(); i += 3) {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

bool TicTacToe::check_column_win() {
    return false;

}

bool TicTacToe::check_row_win() {
    return false;
}

bool TicTacToe::check_diagonal_win() {
    return false; 
}

void TicTacToe::set_winner() {
    if (player == "X") {
        winner = "O";
    } else {
        winner = "X";
    }
}

void TicTacToe::set_next_player() {
    if (player == "X" || player == "x") {
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
