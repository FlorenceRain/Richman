#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <QObject>
#include <QVector>

#include "dice.h"
#include "player.h"
#include "bank.h"
#include "map.h"

class GameManager : public QObject
{
    Q_OBJECT
public:
    explicit GameManager(QObject *parent = nullptr);

    void addPlayer(const Player& player);//添加玩家
    void clearPlayer();//清除玩家

    void start();//开始游戏
    void pause();//暂停
    void doContinue();//继续
    void end();//结束游戏
signals:

public slots:

private:
    QVector<Player*>    players;//玩家对象容器
    Bank*   bank; //银行对象
    Map*    map;   //地图对象
    Dice*   dice; //色子对象
};

#endif // GAMEMANAGER_H
