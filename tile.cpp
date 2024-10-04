#include "tile.h"


Tile::Tile(QObject *parent, QString title)
    :QObject(parent)
    ,title(title)
{

}

void Tile::setTitle(const QString title)
{
    this->title = title;
}

QString Tile::getTitle()
{
    return title;
}

void Tile::onPlayerEnter(Player &owner, Player &player)
{

}

void Tile::onPlayerPassby(Player &owner, Player &player)
{

}
