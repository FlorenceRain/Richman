#include "dice.h"

Dice::Dice(QObject *parent)
    : QObject{parent}
{}

quint16 Dice::threw()
{
    return 6;
}
