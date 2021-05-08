#ifndef ASSIGN2_PLAYER_H
#define ASSIGN2_PLAYER_H
#include "Tilebag.h"
#include "LinkedList.h"
#include <string>


class Player {
public:

	// Initial a new start player.
	Player(std::string name);

	// Used to reload from file
	Player(std::string name, int score, LinkedList *tilesInHand);
	
	// Add a new Tile to current palyer hand 
	bool addTile(Tile* tile);

	// Put one tile on the board, Not matched,return NULL
	Tile* playOneTile(int color, char shape);

	// Withdraw last played tile,如果出牌错误，请撤回上一次出的牌
	bool withdrawLastPlayedTile();

	// 替换tile，把tilesInHand中的一个，从tile bag里替换, 替换了之后这个回合不出牌
	bool replaceOneTile(Tile* newTile, char oldTileColor, int oldTileShape);

	// Free the pointer.
	~Player();

	// Encapsulate the name
	std::string getName();
	void setName(std::string name);

	// Get current score
	int getScore();

	// Add the earned score in once play.
	void increaseScore(int earnedScore);

	// Set the Tile
	void setTilesInHand(LinkedList *tilesInHand);

	// get the Tile
	LinkedList* getTilesInHand();

	// display tiles string
	std::string displayTilesInHand();

	// set initilise tiles in hand before the 1st round
	//LinkedList* initialiseTilesInHand(TileBag *tileBag, Player player);

	LinkedList* initialiseTilesInHand(TileBag *tileBag);
private:
	// The Tiles in curent player hand
	LinkedList* tilesInHand;

	// Player's name 
	std::string name;
	
	// Player's score
	int score;
	
	// Used for withdraw last time played Tile, 
	Tile* lastPlayedTile;
};


#endif