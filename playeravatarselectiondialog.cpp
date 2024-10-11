#include "playeravatarselectiondialog.h"
#include "ui_playeravatarselectiondialog.h"

#include <QGridLayout>
PlayerAvatarSelectionDialog::PlayerAvatarSelectionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PlayerAvatarSelectionDialog)
    , iconButtons{}
{
    ui->setupUi(this);


    QVBoxLayout* vlayout = new QVBoxLayout(this);
    QGridLayout* layout = new QGridLayout;

    vlayout->addLayout(layout);
    vlayout->addWidget(ui->buttonBox);

    //添加按钮
    iconButtons.append(new PlayerIconButton(this,":/img/resource/img/player_icon0", 1));
    iconButtons.append(new PlayerIconButton(this,":/img/resource/img/player_icon1", 1));
    iconButtons.append(new PlayerIconButton(this,":/img/resource/img/player_icon2", 1));
    iconButtons.append(new PlayerIconButton(this,":/img/resource/img/player_icon3", 1));


    //设置按钮
    for(PlayerIconButton* playerIconButton :iconButtons)
    {
        qsizetype i =iconButtons.indexOf(playerIconButton);
        layout->addWidget(playerIconButton, i/4, i%4);
        
    }



    this->setLayout(vlayout);
}

PlayerAvatarSelectionDialog::~PlayerAvatarSelectionDialog()
{
    delete ui;
}
