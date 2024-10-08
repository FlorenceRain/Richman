#ifndef STARTTILE_H
#define STARTTILE_H

#include <QObject>
#include "tile.h"

class StartTile : public Tile
{
    Q_OBJECT
public:
    explicit StartTile(QObject *parent = nullptr,
                       QString title = "default start title");

    void onPlayerEnter(Player& owner, Player& player)override;//玩家进入后的操作
    void onPlayerPassby(Player& owner, Player& player)override;//玩家路过后的操作

signals:
};

#endif // STARTTILE_H
