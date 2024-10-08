#ifndef COMPANYTILE_H
#define COMPANYTILE_H

#include <QObject>
#include "tile.h"
class CompanyTile : public Tile
{
    Q_OBJECT
public:
    explicit CompanyTile(QObject *parent = nullptr,
                         QString title = "Null");

    void onPlayerEnter(Player& owner, Player& player)override;//玩家进入后的操作
    void onPlayerPassby(Player& owner, Player& player)override;//玩家路过后的操作

signals:
};

#endif // COMPANYTILE_H
