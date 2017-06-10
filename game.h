#ifndef GAME_H
#define GAME_H

#include <vector>
#include <time.h>
#include <chrono>
//using namespace std;
using namespace std::chrono;
class Game
{
public:
    Game();
    Game(const double);
    ~Game();
    void timerStart();
    void timerStop();
    void timerDiff();
    //virtual void timer() const;
    //virtual void fall() const = 0;
    void setTotalTime(const double);
    double getTimer();
private:
    double mTime = 10000; // the remaining time
    std::vector<std::vector<int> > mData; // the status of chessboard
    //clock_t start = 0, stop = 0;

    //time_t start, stop;

    milliseconds start, stop;
};

#endif // GAME_H
