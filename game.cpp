#include "game.h"

Game::Game()
{
}

Game::Game(const double totalTime)
{
    mTime = totalTime;
}

Game::~Game()
{
}

void Game::setTotalTime(const double totalTime)
{
    this->mTime = totalTime;
}

void Game::timerStart()
{
    //time(&start);
    start = duration_cast< milliseconds >(
        system_clock::now().time_since_epoch()
    );
}

void Game::timerStop()
{
    //time(&stop);
    stop = duration_cast< milliseconds >(
        system_clock::now().time_since_epoch()
    );
    timerDiff();
}

void Game::timerDiff()
{
    //mTime -= (double)(stop - start)/CLOCKS_PER_SEC;
    //mTime -= difftime(stop, start);
    mTime -= duration_cast<milliseconds>(stop - start).count();
}

double Game::getTimer()
{
    return this->mTime;
}

