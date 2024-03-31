//h
#ifndef TICTACTOE_H
#define TICTACTOE_H

#include<string>
#include<vector>
#include<iostream>
using std::string;

class TicTacToe {
public:
    // public member functions
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;

private:
    //private member functions
    void set_next_player();
    bool check_board_full();
    void clear_board();

    //private data members
    string player;
    std::vector<string> pegs = std::vector<string>(9, " ");
};

#endif