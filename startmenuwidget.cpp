#include "startmenuwidget.h"
#include "ui_startmenuwidget.h"
#include <QGraphicsRectItem>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
StartMenuWidget::StartMenuWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StartMenuWidget)
    , startButton(new QPushButton("开始游戏", this))
    , loadButton(new QPushButton("载入游戏", this))
    , multiplayerButton(new QPushButton("局域网联机", this))
{
    ui->setupUi(this);

    QVBoxLayout* layout = new QVBoxLayout();
    QHBoxLayout* mainLayout = new QHBoxLayout(this);

    // 设置按钮的大小策略
    startButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    loadButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    multiplayerButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);


    // 添加按钮并调整布局
    layout->setAlignment(Qt::AlignCenter);
    layout->addWidget(startButton); // 水平居中
    layout->addWidget(loadButton);
    layout->addWidget(multiplayerButton);

    // 添加一个伸缩项，将按钮组置于布局的中间
    layout->addStretch();

    mainLayout->addStretch();
    mainLayout->addLayout(layout);
    mainLayout->addStretch();

    setLayout(mainLayout);

    // 连接信号
    connect(startButton, &QPushButton::clicked, this, &StartMenuWidget::startGame);

}

StartMenuWidget::~StartMenuWidget()
{
    delete ui;
}
