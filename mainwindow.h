#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QMouseEvent>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QVector>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTimer>
#include <QFileDialog>
#include <qdatetime.h>
#include "game.h"
#include "player.h"
#include "computer.h"
#include<iostream>
#include <cstdlib>
namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    const int CHECK_NUM = 14;
    const int CHECK_WIDTH = 40;
    const int X = 50, Y = 50;//offset
    const int SIZE = CHECK_NUM * CHECK_WIDTH + 2 * X;
    // size = 660
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *mouseEvent);//player
    //friend void Player::fall();
    void computer();
    //friend void Computer::fall();
    int is_win();//Implementing method: searching the substring

// define slot
protected slots:
    void newGame(void);
    void quitGame(void);
    void openGame(void);
    void saveGame(void);
    void setEsayMode(void);
    void setMiddleMode(void);
    void setDifficultMode(void);
    void showAbout(void);
    void timeUpdate(void);
    void updateTimer1(const QString);
    void updateTimer2(const QString);
    void on_radioType_clicked();


private:
    int xPressed;
    int yPressed;
    int chessCounts;
    int counts[225][3];
    int chessboard[15][15];//Simulated chessboard; 1:Black,-1:White 0:None
    Game game;
    // menu
    void setupMenuBar(void);
    void setupToolBar(void);
    void setupStatus();
    int StatusSize; // the size of status
    QTimer *timerComputer;
    QTimer *timerPlayer;
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
