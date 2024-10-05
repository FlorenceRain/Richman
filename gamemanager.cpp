#include "gamemanager.h"

GameManager::GameManager(QObject *parent)
    : QObject{parent}
    ,players{}//玩家对象容器
    ,bank(new Bank(this)) //银行对象
    ,map(new Map(this))   //地图对象
    ,dice(new Dice(this)) //色子对象
{

}

void GameManager::initializeGame()
{

}

void GameManager::addPlayer(const Player &player)
{

}

void GameManager::clearPlayer()
{

}

void GameManager::start()
{

}

void GameManager::pause()
{

}

void GameManager::doContinue()
{

}

void GameManager::end()
{

}
