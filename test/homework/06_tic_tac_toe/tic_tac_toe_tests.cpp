#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(6);
	game->mark_board(9);
	game->mark_board(8);

	game->display_board();
	game->game_over();

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win by first column") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(4);
	game->mark_board(3);
	game->mark_board(7);

	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(2);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first row") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third row") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(3);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from top left") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(1);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
}

//TicTacToe manager
TEST_CASE("Test TicTacToe manager get winner total function") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	TicTacToeManager manager;
	int o, x, t;

// X winner simulation
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->game_over();
	manager.save_game(game);

// O winner simulation
	game->start_game("O");
	game->mark_board(1);
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->game_over();
	manager.save_game(game);

// Tie game simulation
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(6);
	game->mark_board(9);
	game->mark_board(8);
	game->game_over();
	manager.save_game(game);

	manager.get_winner_total(o, x, t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
} 




//TICTACTOE4

TEST_CASE("Test game over if 16 slots are selected") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(6);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(8);
	game->mark_board(11);
	game->mark_board(9);
	game->mark_board(12);
	game->mark_board(10);
	game->mark_board(13);
	game->mark_board(15);
	game->mark_board(14);
	game->mark_board(16);

	game->display_board();
	game->game_over();

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win by first column tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(8);
	game->mark_board(6);
	game->mark_board(13);

	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(3);
	game->mark_board(10);
	game->mark_board(4);
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);
	game->mark_board(1);
	game->mark_board(7);
	game->mark_board(2);
	game->mark_board(11);
	game->mark_board(8);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by fourth column tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(2);
	game->mark_board(12);
	game->mark_board(9);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first row tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(10);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(8);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(2);
	game->mark_board(7);
	game->mark_board(3);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third row tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	game->mark_board(1);
	game->mark_board(10);
	game->mark_board(2);
	game->mark_board(11);
	game->mark_board(3);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by fourth row tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	game->mark_board(1);
	game->mark_board(14);
	game->mark_board(2);
	game->mark_board(15);
	game->mark_board(3);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from top left tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(6);
	game->mark_board(3);
	game->mark_board(11);
	game->mark_board(7);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(7);
	game->mark_board(3);
	game->mark_board(10);
	game->mark_board(7);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
}

//TicTacToe manager
TEST_CASE("Test TicTacToe manager get winner total function tictactoe4") {
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	TicTacToeManager manager;
	int o, x, t;

// X winner simulation
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(3);
	game->mark_board(10);
	game->mark_board(4);
	game->mark_board(14);
	game->game_over();
	manager.save_game(game);

// O winner simulation
	game->start_game("O");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(3);
	game->mark_board(10);
	game->mark_board(4);
	game->mark_board(14);
	game->game_over();
	manager.save_game(game);

// Tie game simulation
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(6);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(8);
	game->mark_board(11);
	game->mark_board(9);
	game->mark_board(12);
	game->mark_board(10);
	game->mark_board(13);
	game->mark_board(15);
	game->mark_board(14);
	game->mark_board(16);
	game->game_over();
	manager.save_game(game);

	manager.get_winner_total(o, x, t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}