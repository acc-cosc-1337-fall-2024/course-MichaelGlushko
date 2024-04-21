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
    TicTacToe(int size) : pegs(size*size, " ") {}

    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const {return player;}
    void display_board() const;
    string get_winner() {return winner;}

protected:
    std::vector<string> pegs;
    
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();


private:
    //private member functions
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();

    //private data members
    string player;
    string winner;
};

#endif