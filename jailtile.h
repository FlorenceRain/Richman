#ifndef JAILTILE_H
#define JAILTILE_H

#include <QObject>
#include "tile.h"
class JailTile : public Tile
{
    Q_OBJECT
public:
    explicit JailTile(QObject *parent = nullptr);

    void onPlayerEnter(Player& owner, Player& player)override;//玩家进入后的操作
    void onPlayerPassby(Player& owner, Player& player)override;//玩家路过后的操作

    bool isLevelMax()override;//是否满级

signals:
};

#endif // JAILTILE_H
