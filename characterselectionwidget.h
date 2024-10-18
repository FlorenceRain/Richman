#ifndef CHARACTERSELECTIONWIDGET_H
#define CHARACTERSELECTIONWIDGET_H

#include <QWidget>
#include <QVector>
#include "playeravatarselectiondialog.h"
#include "characterselectiongroupbox.h"

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

public slots:
        void slotReceivePix(QPixmap pix, QObject* openFrom = nullptr);

private:
    Ui::CharacterSelectionWidget *ui;
    PlayerAvatarSelectionDialog* playerAvatarSelectionDialog;
    QVector<CharacterSelectionGroupBox*> characterSelectionGroupBoxs;
};

#endif // CHARACTERSELECTIONWIDGET_H
