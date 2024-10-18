#ifndef PLAYERCREATINFO_H
#define PLAYERCREATINFO_H

#include <QObject>
#include <QPixmap>

class PlayerCreatInfo : public QObject
{
    Q_OBJECT
public:
    explicit PlayerCreatInfo(QPixmap avatarPix,QString name, bool isAI, QObject *parent = nullptr);

    QString getName();
    QPixmap getAvatarPix();
    bool getIsAI();

signals:

private:
    QPixmap avatarPix;
    QString name;
    bool isAI;
};

#endif // PLAYERCREATINFO_H
