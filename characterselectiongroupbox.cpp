#include "characterselectiongroupbox.h"

#include <QVBoxLayout>

CharacterSelectionGroupBox::CharacterSelectionGroupBox(QWidget *parent, QString picturePath, double ratio, QString defaultName)
    : QGroupBox(parent)
    , avatarButton(new MyPushButton(this,picturePath, ratio))// 头像按钮
    , nameInput(new QLineEdit(defaultName, this))
    , aiCheckBox(new QCheckBox("是否是AI玩家",this))
{
    QVBoxLayout* playerLayout = new QVBoxLayout();  // 每个玩家的布局

    avatarButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);  // 固定大小策略

    nameInput->setPlaceholderText("输入玩家的名字");

    playerLayout->addWidget(avatarButton, 0, Qt::AlignCenter);  // 居中添加头像按钮
    playerLayout->addWidget(nameInput, 0, Qt::AlignCenter);  // 居中添加输入框
    playerLayout->addWidget(aiCheckBox, 0, Qt::AlignCenter);  // 居中添加输入框

    setLayout(playerLayout);

    connect(avatarButton, &QPushButton::clicked, this,[this](){
        emit signOpenDialog(this);
    });
}

void CharacterSelectionGroupBox::setIcon(QPixmap pix)
{
    avatarButton->setIcon(pix);
}
