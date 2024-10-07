#include "characterselectionwidget.h"
#include "ui_characterselectionwidget.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

CharacterSelectionWidget::CharacterSelectionWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CharacterSelectionWidget)
{
    ui->setupUi(this);
    QVBoxLayout* layout = new QVBoxLayout(this);
    QGridLayout* gridLayout = new QGridLayout();

    // 头像选择
    for (int i = 0; i < 4; ++i) {
        QLabel* avatarLabel = new QLabel("玩家 " + QString::number(i + 1), this);
        QPushButton* avatarButton = new QPushButton(QString("选择玩家%1").arg(i+1), this);
        avatarButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

        // 这里可以添加头像选择的逻辑
        gridLayout->addWidget(avatarLabel, i, 0);
        gridLayout->addWidget(avatarButton, i, 1);
    }

    QPushButton* startButton = new QPushButton("开始游戏", this);
    QPushButton* backButton = new QPushButton("返回菜单", this);
    // 设置按钮的大小策略
    startButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    backButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

    layout->setAlignment(Qt::AlignCenter);
    layout->addLayout(gridLayout);
    layout->addWidget(startButton);
    layout->addWidget(backButton);
    setLayout(layout);

    // 连接信号
    connect(startButton, &QPushButton::clicked, this, &CharacterSelectionWidget::startGame);
    connect(backButton, &QPushButton::clicked, this, &CharacterSelectionWidget::backup);
}

CharacterSelectionWidget::~CharacterSelectionWidget()
{
    delete ui;
}
