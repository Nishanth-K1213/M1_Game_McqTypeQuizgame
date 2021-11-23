#ifndef GAME_H
#define GAME_H

#include "stdlib.h"
#include "stdio.h"
#include "conio.h"

#define NUMBER_OF_QUETIONS 20
#define POINTS_FOR_EACH_QUETIONS 5

/* Use struct for play */
struct play {
        unsigned char name;
        unsigned int score ;
        unsigned int rat; /* ratings */
};

void start();
void print_enter options(start game, high score, help);
void switch_chc(int *chc);
void print_help(game help);
void setup_start(ans, count, rat);
void print_highscore(int *chc);



#endif  // GAME_H
