#include "game.hpp"
#include"score_manager.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

void playGame(Difficulty level)
{
    int maxNumber ;
    int maxAttempts;
    switch(level)
    {
        case EASY: maxnumber = 50 ; maxattempts = 10 ; break;
        case MEDIUM: maxnumber = 100 ; maxAttempts = 7 ; break;
        case HARD: maxnumber = 200 ; maxAttempts = 5 ; break;
        default: std::cout << "Invalid difficulty level!"<<std::endl;
    }
    std::srand(stratic_cast<unsigned int>(std::time(nullptr)));
    int secret = std::rand() % maxNumber + 1 ;
    int guess, attempts = 0;
    std::cout << "Guess the number between 1 and " << maxNumber << ":" << std::endl;
    
}