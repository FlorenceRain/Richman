#include "characterselectionwidget.h"
#include "ui_characterselectionwidget.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

CharacterSelectionWidget::CharacterSelectionWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CharacterSelectionWidget)
    ,playerAvatarSelectionDialog(new PlayerAvatarSelectionDialog(this))
{
    ui->setupUi(this);

    QVBoxLayout* mainLayout = new QVBoxLayout(this);   // 主布局
    QHBoxLayout* avatarLayout = new QHBoxLayout();     // 头像和输入框布局

    // 设置主布局和头像布局居中对齐
    mainLayout->setAlignment(Qt::AlignCenter);
    avatarLayout->setAlignment(Qt::AlignCenter);

    // 头像选择和输入框
    for (int i = 0; i < 4; ++i) {
        QVBoxLayout* playerLayout = new QVBoxLayout();  // 每个玩家的布局

        // 头像按钮
        QPushButton* avatarButton = new QPushButton("?", this);
        avatarButton->setFixedSize(200, 200);  // 固定头像大小为200x200
        avatarButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);  // 固定大小策略
        playerLayout->addWidget(avatarButton, 0, Qt::AlignCenter);  // 居中添加头像按钮

        // 输入框
        QLineEdit* nameInput = new QLineEdit(this);
        nameInput->setPlaceholderText(QString("输入玩家%1的名字").arg(i + 1));
        nameInput->setText(QString("玩家%1").arg(i + 1));
        playerLayout->addWidget(nameInput, 0, Qt::AlignCenter);  // 居中添加输入框

        // 将每个玩家的布局添加到横向布局
        avatarLayout->addLayout(playerLayout);

        // 连接头像按钮点击事件，后续可实现头像选择逻辑
        connect(avatarButton, &QPushButton::clicked, this, [this]() {
            // 处理头像选择逻辑
            // 弹出选择头像的对话框等逻辑
            playerAvatarSelectionDialog->show();
        });
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
}

CharacterSelectionWidget::~CharacterSelectionWidget()
{
    delete ui;
}
