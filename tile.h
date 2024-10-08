#ifndef TILE_H
#define TILE_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QMap>

class Player;

class Tile : public QObject
{
    Q_OBJECT
public:
    explicit Tile(QObject *parent = nullptr,
                  QString title = "Null");

    void setTitle(const QString title);
    QString getTitle();


    virtual void onPlayerEnter(Player& owner, Player& player);//玩家进入后的操作
    virtual void onPlayerPassby(Player& owner, Player& player);//玩家路过后的操作

signals:

private:
    QString title;//标题
};

#endif // TILE_H
