#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QObject>
#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    MyPushButton(QWidget* parent = nullptr, QString picturePath = "", double ratio = 1);
    QString getPicturePath();
    void setPicturePath(const QString& picturePath);

    QPixmap getPix();
    void setPix(const QPixmap& pix);

private:
    QString picturePath;
    QPixmap pix;
};

#endif // MYPUSHBUTTON_H
