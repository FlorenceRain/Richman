#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QVector>

class Tile;

class Player : public QObject
{
    Q_OBJECT
public:
    explicit Player(QObject *parent = nullptr, QString name = "Player");

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
    void setStatus(QString status);
    QString getStatus() const;

    void setStatusDuration(quint32 duration);  // 设置状态持续的回合数
    quint32 getStatusDuration() const;
    void decrementStatusDuration();  // 每回合减少状态持续回合数

    // 资产相关
    void addAsset(Tile* asset);
    void removeAsset(Tile* asset);
    QVector<Tile*> getAssets() const;

signals:

private:
    QString name;           // 玩家名字
    quint32 cash;           // 现金
    Tile* currentTile;      // 玩家当前所在格
    quint32 turnCount;      // 当前回合数
    QString status;         // 玩家状态（例如：监禁、普通、暂停行动等）
    quint32 statusDuration; // 状态剩余回合数

    QVector<Tile*> assets;  // 玩家拥有的资产
};

#endif // PLAYER_H
