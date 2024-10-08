#ifndef TRANSPORTSTATIONTILE_H
#define TRANSPORTSTATIONTILE_H

#include <QObject>
#include "tile.h"
class TransportStationTile : public Tile
{
    Q_OBJECT
public:
    explicit TransportStationTile(QObject *parent = nullptr,
                                  QString title = "Null");

    void onPlayerEnter(Player& owner, Player& player)override;//玩家进入后的操作
    void onPlayerPassby(Player& owner, Player& player)override;//玩家路过后的操作


signals:
};

#endif // TRANSPORTSTATIONTILE_H
