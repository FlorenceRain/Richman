#ifndef PLAYERAVATARSELECTIONDIALOG_H
#define PLAYERAVATARSELECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class PlayerAvatarSelectionDialog;
}

class PlayerAvatarSelectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlayerAvatarSelectionDialog(QWidget *parent = nullptr);
    ~PlayerAvatarSelectionDialog();

private:
    Ui::PlayerAvatarSelectionDialog *ui;
};

#endif // PLAYERAVATARSELECTIONDIALOG_H
