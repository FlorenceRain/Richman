#include <QGraphicsRectItem>
#include "gameview.h"
#include "player.h"
#include "tile.h"
GameView::GameView(QWidget *parent)
    : QGraphicsView(parent)
    , scene(new QGraphicsScene(this))
{

    this->setRenderHint(QPainter::Antialiasing);  // 开启抗锯齿

    // 假设我们有一个 10x10 的地图
    int tileSize = 50;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            QGraphicsRectItem* tileItem = new QGraphicsRectItem(i * tileSize, j * tileSize, tileSize, tileSize);
            tileItem->setBrush(QBrush(Qt::gray));  // 设置格子的背景颜色
            scene->addItem(tileItem);
            tiles.append(tileItem);
        }
    }

}

void GameView::initializeScene()
{

}

