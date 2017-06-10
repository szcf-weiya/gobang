#ifndef COMPUTER_H
#define COMPUTER_H

#include "game.h"

class Computer : public Game{
public:
    Computer();
    ~Computer();
    //void fall(MainWindow*);
private:
    int a;

};

#endif // COMPUTER_H
