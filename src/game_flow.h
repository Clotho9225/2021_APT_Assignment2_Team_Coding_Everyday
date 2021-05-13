#ifndef ASSIGN2_BASEGAME_H
#define ASSIGN2_BASEGAME_H

#include <iostream>
#include "Tile.h"
#include "LinkedList.h"
#include "Player.h"
#include "Rules.h"



void qwirkle();
int getSelectionFromMenu();
void newGame();
void scores(Player *player1, Player *player2);
void placeTIle();
void loadGame(std::string fileName);
void credits();
void checkEnd(LinkedList *tileBag, Player *player1, Player *player2);
void game(Player *currentPlayer, Player *player1, Player *player2, 
            Board *board, LinkedList *tileBag, std::string instructure,
        int tilesBagCounter, int p1Counter, int p2Counter, int inputCount);

// Save Game data to file 
// bool saveGame(std::string savePath, Player *currentPlayer, 
// 			Player *player1, Player *player2,
// 			  LinkedList *tileBag, Board *board);



#endif