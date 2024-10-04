#ifndef TILE_H
#define TILE_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QMap>

#include "player.h"

class Tile : public QObject
{
    Q_OBJECT
public:
    explicit Tile(QObject *parent = nullptr,
                  QString title = "Null",
                  Player* owner = nullptr,
                  quint32 price = 0,
                  quint32 rent = 0,
                  quint32 buildingLevel = 0);

    void settitle(const QString title);
    QString gettitle();

    void setOwner(Player* owner);
    Player* getOwner();

    void setprice(const quint32 price);
    quint32 getprice();

    void setrent(const quint32 rent);
    quint32 getrent();

    void setbuildingLevel(const quint32 buildingLevel);
    quint32 getbuildingLevel();
    void update();//升级地产

    virtual void onPlayerEnter(Player& owner, Player& player);//玩家进入后的操作
    virtual void onPlayerPassby(Player& owner, Player& player);//玩家路过后的操作

    virtual bool isLevelMax();//是否满级

signals:

private:
    QString title;//标题
    Player* owner;//所有者
    quint32 price;//购买价格
    quint32 rent;//租金
    quint32 buildingLevel;//等级
};

#endif // TILE_H
