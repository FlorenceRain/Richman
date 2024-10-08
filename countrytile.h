#ifndef COUNTRYTILE_H
#define COUNTRYTILE_H

#include <QObject>
#include "tile.h"
class CountryTile : public Tile
{
    Q_OBJECT
public:
    explicit CountryTile(QObject *parent = nullptr,
                         QString title = "default tile title",
                         quint32 price = 0,
                         QMap<quint32, quint32> rentMap = {},
                         quint32 buildingLevel = 0);

    void onPlayerEnter(Player& owner, Player& player)override;//玩家进入后的操作
    void onPlayerPassby(Player& owner, Player& player)override;//玩家路过后的操作

    void setPrice(const quint32 price);
    quint32 getPrice();

    void setRent(const quint32 level, const quint32 rent);
    quint32 getRent();

    void setBuildingLevel(const quint32 buildingLevel);
    quint32 getBuildingLevel();
    bool isBuildingLevelMax();
    void updateBuilding();//升级地产


signals:

private:
    quint32 price;//购买价格
    QMap<quint32, quint32> rentMap;  // 存储不同等级的租金
    quint32 buildingLevel;//等级
};

#endif // COUNTRYTILE_H
