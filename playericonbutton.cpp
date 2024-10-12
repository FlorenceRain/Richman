#include "playericonbutton.h"
#include <QStyle>
#include <QApplication>
#include <QPropertyAnimation>
#include <QGraphicsDropShadowEffect>

PlayerIconButton::PlayerIconButton(QWidget *parent, QString picturePath, double ratio)
    :MyPushButton(parent, picturePath, ratio)
    ,isSelect(false)
{
    connect(this, &QPushButton::clicked, this ,[this](){
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
        if(isSelect)
        {
            emit signSelected();
        }
    }
}

void PlayerIconButton::slotSelectChanged(bool isSelect)
{

    // 创建阴影效果（在选中时加边框和阴影效果）
    QGraphicsDropShadowEffect* shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(20);
    shadowEffect->setColor(Qt::darkBlue);
    shadowEffect->setOffset(0, 0);  // 阴影偏移

    if (isSelect)
    {
        // 添加阴影效果，模拟按钮边框变大
        this->setGraphicsEffect(shadowEffect);

        emit signSendPix(this->getPix());
    }
    else
    {
        // 移除阴影效果
        this->setGraphicsEffect(nullptr);
    }
}

void PlayerIconButton::slotDeseclect()
{
    setIsSelect(false);
}
