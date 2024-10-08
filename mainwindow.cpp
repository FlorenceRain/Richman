#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsRectItem>
#include <QPushButton>
#include <QFile>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , gameView(new GameView(this))
    , gamemanager(new GameManager(this))
{
    ui->setupUi(this);

    // 加载 QSS 文件
    QFile file(":/qss/resource/qss/style.qss");  // 确保 qss 文件路径正确
    if (file.open(QFile::ReadOnly))
    {
        QString styleSheet = QString::fromUtf8(file.readAll());
        // qDebug() << styleSheet;
        qApp->setStyleSheet(styleSheet); // 为整个应用程序设置样式表
        file.close();
    }
    else
    {
        qDebug() << "qss file open failed！";
    }


    setCentralWidget(gameView);
}

MainWindow::~MainWindow()
{
    delete ui;
}
