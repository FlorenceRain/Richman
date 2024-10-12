#ifndef PLAYERVIEW_H
#define PLAYERVIEW_H

#include <QObject>
#include <player.h>

class PlayerView : public QObject
{
    Q_OBJECT
public:
    explicit PlayerView(QObject *parent = nullptr);

signals:

public slots:

private:
    Player* player;
};

#endif // PLAYERVIEW_H
