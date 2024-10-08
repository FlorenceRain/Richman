#include "playeravatarselectiondialog.h"
#include "ui_playeravatarselectiondialog.h"

PlayerAvatarSelectionDialog::PlayerAvatarSelectionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PlayerAvatarSelectionDialog)
{
    ui->setupUi(this);
}

PlayerAvatarSelectionDialog::~PlayerAvatarSelectionDialog()
{
    delete ui;
}
