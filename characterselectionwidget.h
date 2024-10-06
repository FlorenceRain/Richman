#ifndef CHARACTERSELECTIONWIDGET_H
#define CHARACTERSELECTIONWIDGET_H

#include <QWidget>

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

private:
    Ui::CharacterSelectionWidget *ui;
};

#endif // CHARACTERSELECTIONWIDGET_H
