//h
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

#include "tic_tac_toe.h"
#include<vector>
#include<string>

class TicTacToeManager {
public:
//public member functions
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& x, int& t);

private:
//private data members
    std::vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
//private member functions
    void update_winner_count(std::string winner);

};

#endif