#include "gameboardwidget.h"
#include "ui_gameboardwidget.h"

GameBoardWidget::GameBoardWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameBoardWidget)
{
    ui->setupUi(this);
}

GameBoardWidget::~GameBoardWidget()
{
    delete ui;
}
