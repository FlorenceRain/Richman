#include <QGraphicsRectItem>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include "gameview.h"
#include "startmenuwidget.h"
#include "gameboardwidget.h"
#include "characterselectionwidget.h"

GameView::GameView(QWidget  *parent)
    : QWidget (parent)
    , stackedWidget(new QStackedWidget(this))// 用于切换不同界面的堆叠窗口
    , startMenuWidget(new StartMenuWidget(this))// 开始菜单
    , characterSelectionWidget(new CharacterSelectionWidget(this))// 选人界面
    , gameBoardWidget(new GameBoardWidget(this))// 游戏界面
{
    // 将各个界面添加到堆叠窗口
    stackedWidget->addWidget(startMenuWidget);
    stackedWidget->addWidget(characterSelectionWidget);
    stackedWidget->addWidget(gameBoardWidget);

    // 设置初始界面为开始菜单
    stackedWidget->setCurrentWidget(startMenuWidget);

    // 布局设置
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(stackedWidget);
    setLayout(layout);

    // 连接信号
    connect(startMenuWidget, &StartMenuWidget::startGame, this, [this](){
        // 设置初始界面为选人界面
        stackedWidget->setCurrentWidget(characterSelectionWidget);
    });

    connect(characterSelectionWidget,&CharacterSelectionWidget::backup,this,[this](){

        // 设置初始界面为开始菜单
        stackedWidget->setCurrentWidget(startMenuWidget);
    });

    connect(characterSelectionWidget, &CharacterSelectionWidget::startGame, this, &GameView::onStartButtonClicked);
}

