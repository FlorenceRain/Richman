#include "characterselectionwidget.h"
#include "ui_characterselectionwidget.h"

CharacterSelectionWidget::CharacterSelectionWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CharacterSelectionWidget)
{
    ui->setupUi(this);
}

CharacterSelectionWidget::~CharacterSelectionWidget()
{
    delete ui;
}
