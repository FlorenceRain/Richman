#include "player.h"
#include "tile.h"

Player::Player(QObject *parent, QString name)
    : QObject{parent}
    ,name(name)
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

}

void Player::incrementTurn()
{

}

quint32 Player::getTurnCount() const
{

}

void Player::setStatus(QString status)
{

}

QString Player::getStatus() const
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
