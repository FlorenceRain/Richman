#ifndef MAP_H
#define MAP_H

#include <QObject>
#include <QVector>
#include "tile.h"

class Map : public QObject
{
    Q_OBJECT
public:
    explicit Map(QObject *parent = nullptr);

    Tile* gettiles(const QString& title);
signals:

private:
    QVector<Tile*> tiles = {};//格子对象容器
};

#endif // MAP_H
