#ifndef GAMEBOARDWIDGET_H
#define GAMEBOARDWIDGET_H

#include <QWidget>
#include <QVector>
#include "player.h"
#include "tile.h"

namespace Ui {
class GameBoardWidget;
}

class GameBoardWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GameBoardWidget(QWidget *parent = nullptr);
    ~GameBoardWidget();

private:
    Ui::GameBoardWidget *ui;
    QVector<Player*>* players;
    QVector<Tile*>* tiles;
};

#endif // GAMEBOARDWIDGET_H
