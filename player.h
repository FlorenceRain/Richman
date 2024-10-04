#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player : public QObject
{
    Q_OBJECT
public:
    explicit Player(QObject *parent = nullptr);

    void setcash(const quint32 cash);
    quint32 getcash();
signals:

private:

    quint32 cash;//现金
};

#endif // PLAYER_H
