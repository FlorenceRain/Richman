#include "playericonbutton.h"

PlayerIconButton::PlayerIconButton(QWidget *parent, QString picturePath, double ratio)
    :MyPushButton(parent, picturePath, ratio)
{

    connect(this, &QPushButton::clicked, this ,[this](){
        emit signSendPix(this->getPix());
        setIsSelect(true);
    });

    connect(this, &PlayerIconButton::signSelectChanged, this, &PlayerIconButton::slotSelectChanged);
}

bool PlayerIconButton::getIsSelect()
{
    return isSelect;
}

void PlayerIconButton::setIsSelect(bool isSelect)
{
    if(this->isSelect != isSelect)
    {
        this->isSelect = isSelect;
        emit signSelectChanged(isSelect);
    }
}

void PlayerIconButton::slotSelectChanged(bool isSelect)
{
    if (isSelect)
    {
        // 添加边框颜色和样式
        this->setStyleSheet("QPushButton{border: 3px solid #FF0000; padding: 2px;}");
        qDebug() << "select";
    }
    else
    {
        // 移除边框
        this->setStyleSheet("QPushButton{border: 0px; padding: 0px;}");
    }
}
