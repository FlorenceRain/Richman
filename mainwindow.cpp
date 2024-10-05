#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsRectItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , gameView(new GameView(this))
    , gamemanager(new GameManager(this))
{
    ui->setupUi(this);


    // 初始化界面和游戏状态
    gameView->initializeScene();
    gamemanager->initializeGame();
}

MainWindow::~MainWindow()
{
    delete ui;
}
