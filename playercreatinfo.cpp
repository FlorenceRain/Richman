#include "playercreatinfo.h"


PlayerCreatInfo::PlayerCreatInfo(QPixmap avatarPix, QString name, bool isAI, QObject *parent)
    : QObject{parent}
    , avatarPix(avatarPix)
    , name(name)
    ,isAI(isAI)
{
}

QString PlayerCreatInfo::getName()
{
    return name;
}

QPixmap PlayerCreatInfo::getAvatarPix()
{
    return avatarPix;
}

bool PlayerCreatInfo::getIsAI()
{
    return isAI;
}
