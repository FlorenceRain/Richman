#include "playeravatarselectiondialog.h"
#include "ui_playeravatarselectiondialog.h"

#include <QGridLayout>
#include <QDialogButtonBox>

PlayerAvatarSelectionDialog::PlayerAvatarSelectionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PlayerAvatarSelectionDialog)
    , iconButtons{}
    ,openFrom(nullptr)
    , pix()
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
    for(PlayerIconButton* playerIconButton : iconButtons)
    {
        qsizetype i =iconButtons.indexOf(playerIconButton);
        layout->addWidget(playerIconButton, i/4, i%4);

        for(PlayerIconButton* otherplayerIconButton : iconButtons)
        {
            if(otherplayerIconButton != playerIconButton)
            {
                connect(playerIconButton, &PlayerIconButton::signSelected, otherplayerIconButton, &PlayerIconButton::slotDeseclect);
            }

        }

        connect(playerIconButton, &PlayerIconButton::signSendPix, this, &PlayerAvatarSelectionDialog::soltSetPix);
    }

    this->setLayout(vlayout);

    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, [this](){

        emit signSendPix(getPix(), openFrom);
    });

}

PlayerAvatarSelectionDialog::~PlayerAvatarSelectionDialog()
{
    delete ui;
}

void PlayerAvatarSelectionDialog::showFrom(QObject *openFrom)
{
    this->openFrom = openFrom;
    this->show();
}

void PlayerAvatarSelectionDialog::setPix(const QPixmap &pix)
{
    this->pix = pix;
}

QPixmap PlayerAvatarSelectionDialog::getPix()
{
    return pix;
}

void PlayerAvatarSelectionDialog::soltSetPix(QPixmap pix)
{
    setPix(pix);
}
