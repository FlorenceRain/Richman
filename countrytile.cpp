#include "countrytile.h"

CountryTile::CountryTile(QObject *parent, QString title, quint32 price, QMap<quint32, quint32> rentMap, quint32 buildingLevel)
    :Tile(parent,title)
    ,price(price)
    ,rentMap(rentMap)
    ,buildingLevel(buildingLevel)
{

}

void CountryTile::onPlayerEnter(Player &owner, Player &player)
{

}

void CountryTile::onPlayerPassby(Player &owner, Player &player)
{

}

void CountryTile::setPrice(const quint32 price)
{
    this->price = price;
}

quint32 CountryTile::getPrice()
{
    return price;
}

void CountryTile::setRent(const quint32 level, const quint32 rent)
{
    rentMap[level] = rent;
}


quint32 CountryTile::getRent()
{
    return rentMap[buildingLevel];
}

void CountryTile::setBuildingLevel(const quint32 buildingLevel)
{
    this->buildingLevel = buildingLevel;
}

quint32 CountryTile::getBuildingLevel()
{
    return buildingLevel;
}

bool CountryTile::isBuildingLevelMax()
{

}

void CountryTile::updateBuilding()
{
    if(isBuildingLevelMax())
    {
        qDebug() << "Level is Max";
        return;
    }
    setBuildingLevel(getBuildingLevel()+1);
}
