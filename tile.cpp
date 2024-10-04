#include "tile.h"


void Tile::settitle(const QString title)
{
    this->title = title;
}

QString Tile::gettitle()
{
    return title;
}

void Tile::setOwner(Player *owner)
{
    this->owner = owner;
}

Player *Tile::getOwner()
{
    return owner;
}

void Tile::setprice(const quint32 price)
{
    this->price = price;
}

quint32 Tile::getprice()
{
    return price;
}

void Tile::setrent(const quint32 rent)
{
    this->price = rent;
}

quint32 Tile::getrent()
{
    return rent;
}

void Tile::setbuildingLevel(const quint32 buildingLevel)
{
    this->buildingLevel = buildingLevel;
}

quint32 Tile::getbuildingLevel()
{
    return buildingLevel;
}

void Tile::update()
{
    if(isLevelMax())
    {
        qDebug() << "Level is Max";
        return;
    }
    setbuildingLevel(getbuildingLevel()+1);
}
