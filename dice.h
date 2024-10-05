#ifndef DICE_H
#define DICE_H

#include <QObject>

class Dice : public QObject
{
    Q_OBJECT
public:
    explicit Dice(QObject *parent = nullptr);

    quint16 threw();

signals:
};

#endif // DICE_H
