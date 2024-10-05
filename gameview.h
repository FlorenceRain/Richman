#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include <QGraphicsView>
#include <QObject>

class Player;
class Tile;

class GameView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit GameView(QWidget *parent = nullptr);

    // 初始化场景和地图
    void initializeScene();

public slots:


private:
    QGraphicsScene* scene;
    QVector<QGraphicsRectItem*> tiles; // 存储格子的图形元素
    QMap<Player*, QGraphicsPixmapItem*> playerIcons; // 玩家图标
};

#endif // GAMEVIEW_H
