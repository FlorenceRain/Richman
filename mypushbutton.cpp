#include "mypushbutton.h"

MyPushButton::MyPushButton(QWidget *parent, QString picturePath, double ratio)
    : QPushButton(parent)
    , picturePath(picturePath)
    , pix(picturePath)
{
    pix=pix.scaled(pix.width()*ratio,pix.height()*ratio);
    this->setFixedSize(pix.width(),pix.height());
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));
 }

QString MyPushButton::getPicturePath()
{
    return picturePath;
}

void MyPushButton::setPicturePath(const QString &picturePath)
{
    this->picturePath = picturePath;
}

QPixmap MyPushButton::getPix()
{
    return pix;
}

void MyPushButton::setPix(const QPixmap &pix)
{
    this->pix = pix;
}
