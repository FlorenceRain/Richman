#ifndef STARTMENUWIDGET_H
#define STARTMENUWIDGET_H

#include "qpushbutton.h"
#include <QWidget>

namespace Ui {
class StartMenuWidget;
}

class StartMenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StartMenuWidget(QWidget *parent = nullptr);
    ~StartMenuWidget();


signals:
    void startGame();

private:
    Ui::StartMenuWidget *ui;

    QPushButton* startButton;
    QPushButton* loadButton;
    QPushButton* multiplayerButton;
};

#endif // STARTMENUWIDGET_H
