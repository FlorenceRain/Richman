#ifndef BANK_H
#define BANK_H

#include <QObject>

class Bank : public QObject
{
    Q_OBJECT
public:
    explicit Bank(QObject *parent = nullptr);

signals:
};

#endif // BANK_H
