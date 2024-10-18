#include "characterselectionwidget.h"
#include "ui_characterselectionwidget.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>

CharacterSelectionWidget::CharacterSelectionWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CharacterSelectionWidget)
    , playerAvatarSelectionDialog(new PlayerAvatarSelectionDialog(this))
    , characterSelectionGroupBoxs{}
{
    ui->setupUi(this);

    QVBoxLayout* mainLayout = new QVBoxLayout(this);   // 主布局
    QHBoxLayout* avatarLayout = new QHBoxLayout();     // 头像和输入框布局

    // 设置主布局和头像布局居中对齐
    mainLayout->setAlignment(Qt::AlignCenter);
    avatarLayout->setAlignment(Qt::AlignCenter);

    // 头像选择和输入框
    characterSelectionGroupBoxs.append(new CharacterSelectionGroupBox(this,":/img/resource/img/player_icon0", 1 , "玩家1"));
    characterSelectionGroupBoxs.append(new CharacterSelectionGroupBox(this,":/img/resource/img/player_icon0", 1 , "玩家2"));
    characterSelectionGroupBoxs.append(new CharacterSelectionGroupBox(this,":/img/resource/img/player_icon0", 1 , "玩家3"));
    characterSelectionGroupBoxs.append(new CharacterSelectionGroupBox(this,":/img/resource/img/player_icon0", 1 , "玩家4"));


    for(CharacterSelectionGroupBox* characterSelectionGroupBox : characterSelectionGroupBoxs)
    {
        avatarLayout->addWidget(characterSelectionGroupBox);
        connect(characterSelectionGroupBox, &CharacterSelectionGroupBox::signOpenDialog, playerAvatarSelectionDialog, &PlayerAvatarSelectionDialog::slotOpenFrom);
    }


    // 添加头像布局到主布局
    mainLayout->addLayout(avatarLayout);

    // 开始游戏按钮
    QPushButton* startButton = new QPushButton("开始游戏", this);
    startButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

    // 返回菜单按钮
    QPushButton* backButton = new QPushButton("返回菜单", this);
    backButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

    // 添加按钮到主布局
    mainLayout->addWidget(startButton, 0, Qt::AlignCenter);  // 居中添加开始按钮
    mainLayout->addWidget(backButton, 0, Qt::AlignCenter);   // 居中添加返回按钮

    setLayout(mainLayout);

    // 连接信号
    connect(startButton, &QPushButton::clicked, this, &CharacterSelectionWidget::startGame);
    connect(backButton, &QPushButton::clicked, this, &CharacterSelectionWidget::backup);
    connect(backButton, &QPushButton::clicked, this, [this]() {
        playerAvatarSelectionDialog->hide();
    });

    connect(playerAvatarSelectionDialog, &PlayerAvatarSelectionDialog::signSendPix, this, &CharacterSelectionWidget::slotReceivePix);
}

CharacterSelectionWidget::~CharacterSelectionWidget()
{
    delete ui;
}

void CharacterSelectionWidget::slotReceivePix(QPixmap pix, QObject *openFrom)
{
    // 检查 openFrom 是否是 QPushButton 类型
    CharacterSelectionGroupBox* groupBox = qobject_cast<CharacterSelectionGroupBox*>(openFrom);

    // 如果是 QPushButton
    if (groupBox) {
        // 设置按钮的图像
        groupBox->setIcon(pix);
    } else {
        qWarning() << "Received object is not a QPushButton!";
    }
}
