#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include <QObject>
#include <QStackedWidget>

class Player;
class Tile;
class StartMenuWidget;
class CharacterSelectionWidget;
class GameBoardWidget;


class GameView : public QWidget
{
    Q_OBJECT
public:
    explicit GameView(QWidget  *parent = nullptr);

signals:
    void onStartButtonClicked();

private:

    QStackedWidget* stackedWidget; // 用于切换不同界面的堆叠窗口
    StartMenuWidget* startMenuWidget;       // 开始菜单
    CharacterSelectionWidget* characterSelectionWidget; // 选人界面
    GameBoardWidget* gameBoardWidget;       // 游戏界面

};

#endif // GAMEVIEW_H
