//h
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

#include"tic_tac_toe.h"
#include<vector>
#include<string>
#include<memory>

class TicTacToeManager {
public:
//public member functions
    void save_game(std::unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& x, int& t);
    void display_games();

private:
//private data members
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
//private member functions
    void update_winner_count(std::string winner);

};

#endif