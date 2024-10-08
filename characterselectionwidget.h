#ifndef CHARACTERSELECTIONWIDGET_H
#define CHARACTERSELECTIONWIDGET_H

#include <QWidget>
#include "playeravatarselectiondialog.h"

namespace Ui {
class CharacterSelectionWidget;
}

class CharacterSelectionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CharacterSelectionWidget(QWidget *parent = nullptr);
    ~CharacterSelectionWidget();

signals:
    void startGame();
    void backup();

private:
    Ui::CharacterSelectionWidget *ui;
    PlayerAvatarSelectionDialog* playerAvatarSelectionDialog;
};

#endif // CHARACTERSELECTIONWIDGET_H
