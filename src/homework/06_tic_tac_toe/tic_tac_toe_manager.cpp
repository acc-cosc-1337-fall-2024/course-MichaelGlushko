//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b) {
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t) {
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(std::string winner) {
    if (winner == "x" || winner == "X") {
        x_win += 1;
    } else if (winner == "o" || winner == "O") {
        o_win += 1;
    } else {
        ties += 1;
    }
}