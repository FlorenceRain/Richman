#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QVector>
#include <QPixmap>


#include "playercreatinfo.h"

class Tile;

class Player : public QObject
{
    Q_OBJECT
public:
    explicit Player(PlayerCreatInfo playerCreatInfo, QObject *parent = nullptr);

    enum State {
        Normal,   // 正常状态
        Pause,   // 暂停
        Bankrupt  // 破产
    };

    // 现金相关
    void setCash(quint32 cash);
    void addCash(quint32 cash);
    void reduceCash(quint32 cash);
    quint32 getCash() const;


    // 玩家移动相关
    void moveTo(Tile* newTile);
    Tile* getCurrentTile() const;

    // 玩家回合相关
    void incrementTurn();  // 增加回合数
    quint32 getTurnCount() const;

    // 玩家状态
    void setStatus(Player::State status);
    Player::State getStatus() const;

    void setStatusDuration(quint32 duration);  // 设置状态持续的回合数
    quint32 getStatusDuration() const;
    void decrementStatusDuration();  // 每回合减少状态持续回合数

    // 资产相关
    void addAsset(Tile* asset);
    void removeAsset(Tile* asset);
    QVector<Tile*> getAssets() const;

    void takeTurn();  // 玩家进行一个回合

signals:
    void playerMoved(Tile* startTile, Tile* endTile);  // 当玩家移动时发出信号

private:
    QString name;           // 玩家名字
    QPixmap avatarPix;      // 头像
    quint32 cash;           // 现金
    Tile* currentTile;      // 玩家当前所在格
    quint32 turnCount;      // 当前回合数
    Player::State status;   // 玩家状态（例如：监禁、普通、暂停行动等）
    quint32 statusDuration; // 状态剩余回合数
    QVector<Tile*> assets;  // 玩家拥有的资产
};

#endif // PLAYER_H
