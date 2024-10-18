#ifndef PLAYERAVATARSELECTIONDIALOG_H
#define PLAYERAVATARSELECTIONDIALOG_H

#include <QDialog>
#include <QVector>
#include <QPushButton>

#include "playericonbutton.h"

namespace Ui {
class PlayerAvatarSelectionDialog;
}

class PlayerAvatarSelectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlayerAvatarSelectionDialog(QWidget *parent = nullptr);
    ~PlayerAvatarSelectionDialog();

    void setPix(const QPixmap& pix);
    QPixmap getPix();


signals:
    void signSendPix(QPixmap pix, QObject* openFrom = nullptr);

public slots:
    void soltSetPix(QPixmap pix);
    void slotOpenFrom(QObject* openFrom = nullptr);

private:
    Ui::PlayerAvatarSelectionDialog *ui;
    QVector<PlayerIconButton*> iconButtons;
    QObject* openFrom;
    QPixmap pix;
};

#endif // PLAYERAVATARSELECTIONDIALOG_H
