#ifndef CHARACTERSELECTIONGROUPBOX_H
#define CHARACTERSELECTIONGROUPBOX_H

#include <QGroupBox>
#include <QObject>
#include <QCheckBox>
#include <QLineEdit>
#include <QPixmap>

#include "mypushbutton.h"


class CharacterSelectionGroupBox : public QGroupBox
{
    Q_OBJECT
public:
    CharacterSelectionGroupBox(QWidget* parent = nullptr, QString picturePath = "", double ratio = 1, QString defaultName = "");

    void setIcon(QPixmap pix);
signals:
    void signOpenDialog(QObject* openFrom = nullptr);

private:
    MyPushButton* avatarButton;
    QLineEdit* nameInput;
    QCheckBox* aiCheckBox;
};

#endif // CHARACTERSELECTIONGROUPBOX_H
