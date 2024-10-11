#ifndef PLAYERICONBUTTON_H
#define PLAYERICONBUTTON_H

#include <QObject>
#include <QPushButton>

#include "mypushbutton.h"

class PlayerIconButton : public MyPushButton
{
    Q_OBJECT
public:
    PlayerIconButton(QWidget *parent, QString picturePath, double ratio);

    bool getIsSelect();
    void setIsSelect(bool isSelect);

signals:
    void signSendPix(QPixmap pix);
    void signSelectChanged(bool isSelect);

public slots:
    void slotSelectChanged(bool isSelect);

private:
    bool isSelect;

};

#endif // PLAYERICONBUTTON_H
