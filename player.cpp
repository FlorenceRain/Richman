#include "player.h"
#include "tile.h"

Player::Player(QObject *parent, QString name, quint32 cash, Tile *currentTile)
    : QObject{parent}
    , name(name)
    , cash(cash)
    , currentTile(currentTile)
    , turnCount(0)
    , status(Normal)
    , statusDuration(0)
    , assets{}

{

}

void Player::setCash(quint32 cash)
{

}

void Player::addCash(quint32 cash)
{

}

void Player::reduceCash(quint32 cash)
{

}

quint32 Player::getCash() const
{

}

void Player::moveTo(Tile *newTile)
{

}

Tile *Player::getCurrentTile() const
{
    return currentTile;
}

void Player::incrementTurn()
{

}

quint32 Player::getTurnCount() const
{

}

void Player::setStatus(State status)
{

}

Player::State Player::getStatus() const
{

}



void Player::setStatusDuration(quint32 duration)
{

}

quint32 Player::getStatusDuration() const
{

}

void Player::decrementStatusDuration()
{

}

void Player::addAsset(Tile *asset)
{

}

void Player::removeAsset(Tile *asset)
{

}

QVector<Tile *> Player::getAssets() const
{

}

void Player::takeTurn()
{

}
