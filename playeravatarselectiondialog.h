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

signals:


private:
    Ui::PlayerAvatarSelectionDialog *ui;
    QVector<PlayerIconButton*> iconButtons;
};

#endif // PLAYERAVATARSELECTIONDIALOG_H
