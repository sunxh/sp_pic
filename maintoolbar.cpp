#include "maintoolbar.h"
#include <QIcon>


#include <QToolButton>
#include <QMenu>
#include <QAction>

#include <QVBoxLayout>

MainToolbar::MainToolbar(QWidget *parent)
    : QToolBar(parent)
{
    setupActions();
}

void MainToolbar::setupActions()
{
    setIconSize(QSize(16, 16)); // 👈 设置图标尺寸
    QPixmap sprite(":/new/prefix1/icons/toolbar1.png");  // toolbar1.png
    QPixmap PixmapTable = sprite.copy(0, 0, 64, 64);      // 制表
    QPixmap PixmapBak= sprite.copy(64, 0, 64, 64);    // 备用
    QPixmap PixmapClose = sprite.copy(128, 0, 64, 64);    // 关闭应用
    QPixmap PixmapPicture = sprite.copy(192, 0, 64, 64);    // 流程图
    QPixmap PixmapCXYKXX = sprite.copy(256, 0, 64, 64);    // 查询遥控信息
    QPixmap sprite2(":/new/prefix1/icons/Toolbar2.png");  // toolbar2.png
    QPixmap PixmapFullscreen = sprite2.copy(0, 0, 16, 16);      // 全屏
    QPixmap PixmapMainwindow= sprite2.copy(16, 0, 16, 16);    // 主窗口
    QPixmap PixmapSystemctlpanel = sprite2.copy(32, 0, 16, 16);    // 系统控制面板
    QPixmap PixmapGuangzipai = sprite2.copy(48, 0, 16, 16);    // 光字牌
    QPixmap PixmapPicassistant = sprite2.copy(64, 0, 16, 16);    //图形辅助窗口
    QPixmap PixmapTrend = sprite2.copy(80, 0, 16, 16);    // 曲线图

    QPixmap PixmapBarwindow = sprite2.copy(96, 0, 16, 16);    // 棒图窗
    QPixmap PixmapElechistogram = sprite2.copy(112, 0, 16, 16);    // 电度直方图
    QPixmap PixmapZoomin = sprite2.copy(128, 0, 16, 16);    // 放大
    QPixmap PixmapZoomout = sprite2.copy(144, 0, 16, 16);    // 缩小
    QPixmap PixmapMove = sprite2.copy(160, 0, 16, 16);    // 移动
    QPixmap PixmapHome = sprite2.copy(176, 0, 16, 16);    // 第一幅图
    QPixmap PixmapPageup = sprite2.copy(192, 0, 16, 16);    // 前一幅图
    QPixmap PixmapPagedown = sprite2.copy(208, 0, 16, 16);    // 后一幅图
    QPixmap PixmapEnd = sprite2.copy(224, 0, 16, 16);    // 最后一幅图
    QPixmap PixmapPrelocation = sprite2.copy(240, 0, 16, 16);    // 上一位置
    QPixmap PixmapNextlocation = sprite2.copy(256, 0, 16, 16);    // 下一位置
    QPixmap PixmapSavepiclocation = sprite2.copy(272, 0, 16, 16);    // 保存画面当前存储位置
    QPixmap PixmapCleanpiclocation = sprite2.copy(288, 0, 16, 16);    // 清除画面当前存储位置
    QPixmap PixmapPiclayer = sprite2.copy(304, 0, 16, 16);    // 画面层
    QPixmap PixmapPicViewinfo = sprite2.copy(320, 0, 16, 16);    // 画面视角信息
    QPixmap PixmapClose2 = sprite2.copy(336, 0, 16, 16);    // 关闭
    QPixmap PixmapPrinter = sprite2.copy(352, 0, 16, 16);    // 打印
    QPixmap PixmapAbout = sprite2.copy(368, 0, 16, 16);    // 关于
    QPixmap PixmapHorn = sprite2.copy(384, 0, 16, 16);    // 音响
    QPixmap PixmapNavigate = sprite2.copy(400, 0, 16, 16);    //导航图
    QPixmap PixmapWinsave = sprite2.copy(416, 0, 16, 16);    //窗口存盘
    QPixmap PixmapMonitor = sprite2.copy(432, 0, 16, 16);    //五防监控使能
    QPixmap PixmapPicswitch = sprite2.copy(448, 0, 16, 16);    //画面切换
    QPixmap PixmapYKinfo = sprite2.copy(464, 0, 16, 16);    //遥控信息
    QPixmap PixmapSOE = sprite2.copy(480, 0, 16, 16);    //事故追忆
    QPixmap PixmapPicLock = sprite2.copy(496, 0, 16, 16);    //画面锁定与解锁
    QPixmap PixmapCheck = sprite2.copy(512, 0, 16, 16);    //检查
    QPixmap PixmapOperationticket = sprite2.copy(528, 0, 16, 16);    //执行操作票据


    tableAction = new QAction(QIcon(PixmapTable), "制表", this);
    bakAction = new QAction(QIcon(PixmapBak), "  ", this);
    closeAction = new QAction(QIcon(PixmapClose), "关闭窗口", this);
    pictureAction = new QAction(QIcon(PixmapPicture), "流程图", this);
    cxykxxAction = new QAction(QIcon(PixmapCXYKXX), "查询遥控信息", this);
    FullscreenAction=new QAction(QIcon(PixmapFullscreen), "全屏", this);
    MainwindowAction=new QAction(QIcon(PixmapMainwindow), "主窗口", this);
    SystemctlpanelAction=new QAction(QIcon(PixmapSystemctlpanel), "系统控制面板", this);
    GuangzipaiAction=new QAction(QIcon(PixmapGuangzipai), "光字牌", this);
    PicassistantAction=new QAction(QIcon(PixmapPicassistant), "图形辅助窗口", this);
    TrendAction=new QAction(QIcon(PixmapTrend), "曲线图", this);

    BarwindowAction=new QAction(QIcon(PixmapBarwindow), "棒图窗", this);
    ElechistogramAction=new QAction(QIcon(PixmapElechistogram), "电度直方图", this);
    ZoominAction=new QAction(QIcon(PixmapZoomin), "放大", this);
    ZoomoutAction=new QAction(QIcon(PixmapZoomout), "缩小", this);
    MoveAction=new QAction(QIcon(PixmapMove), "移动", this);
    HomeAction=new QAction(QIcon(PixmapHome), "第一幅图", this);
    PageupAction=new QAction(QIcon(PixmapPageup), "前一幅图", this);
    PagedownAction=new QAction(QIcon(PixmapPagedown), "后一幅图", this);
    EndAction=new QAction(QIcon(PixmapEnd), "最后一幅图", this);
    PrelocationAction=new QAction(QIcon(PixmapPrelocation), "上一位置", this);
    NextlocationAction=new QAction(QIcon(PixmapNextlocation), "下一位置", this);
    SavepiclocationAction=new QAction(QIcon(PixmapSavepiclocation), "保存画面当前存储位置", this);
    CleanpiclocationAction=new QAction(QIcon(PixmapCleanpiclocation), "清除画面当前存储位置", this);
    PiclayerAction=new QAction(QIcon(PixmapPiclayer), "画面层", this);
    PicViewinfoAction=new QAction(QIcon(PixmapPicViewinfo), "画面视角信息", this);
    Close2Action=new QAction(QIcon(PixmapClose2), "关闭", this);
    PrinterAction=new QAction(QIcon(PixmapPrinter), "打印", this);
    AboutAction=new QAction(QIcon(PixmapAbout), "关于", this);
    HornAction=new QAction(QIcon(PixmapHorn), "音响", this);
    NavigateAction=new QAction(QIcon(PixmapNavigate), "导航图", this);
    WinsaveAction=new QAction(QIcon(PixmapWinsave), "窗口存盘", this);
    MonitorAction=new QAction(QIcon(PixmapMonitor), "五防监控使能", this);
    PicswitchAction=new QAction(QIcon(PixmapPicswitch), "画面切换", this);
    YkinfoAction=new QAction(QIcon(PixmapYKinfo), "遥控信息", this);
    SOEAction=new QAction(QIcon(PixmapSOE), "事故追忆", this);
    PicLockAction=new QAction(QIcon(PixmapPicLock), "画面锁定与解锁", this);
    CheckAction=new QAction(QIcon(PixmapCheck), "检查", this);
    OperationticketAction=new QAction(QIcon(PixmapOperationticket), "执行操作票据", this);





    //添加到工具栏======================================================================================

    addAction(tableAction);
    addAction(bakAction);
    addAction(closeAction);
    addAction(pictureAction);
    // 创建一个带下拉菜单的 QToolButton（代替原 QAction）--------------------
    QMenu *dropMenu = new QMenu(this);
    QAction *pic1 = dropMenu->addAction("流程图01");
    QAction *pic2 = dropMenu->addAction("流程图02");
    QToolButton *dropButton = new QToolButton(this);
    dropButton->setText("流程图");
    //dropButton->setIcon(QIcon(PixmapPicture));
    dropButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);  // 图标在上文字在下
    dropButton->setMenu(dropMenu);
    dropButton->setPopupMode(QToolButton::MenuButtonPopup);  // 小三角下拉
    dropButton->setFixedSize(16, 16);  // 可选，控制按钮大小

    dropButton->setStyleSheet(R"(
    QToolButton {
        margin-top: 8px;  /* 向下偏移 */
        margin-right: 7px;
    }
    )");
    insertWidget(cxykxxAction, dropButton);
    //addWidget(dropButton);
    //-------------------------------------------------------------------
    addAction(cxykxxAction);
    addAction(FullscreenAction);
    addAction(MainwindowAction);
    addAction(SystemctlpanelAction);
    addAction(GuangzipaiAction);
    addAction(PicassistantAction);
    addAction(TrendAction);
    //TrendAction->setEnabled(false);
    addAction(BarwindowAction);
    addAction(ElechistogramAction);
    addAction(ZoominAction);
    addAction(ZoomoutAction);
    addAction(MoveAction);
    addAction(HomeAction);
    addAction(PageupAction);
    addAction(PagedownAction);
    addAction(EndAction);
    addAction(PrelocationAction);
    addAction(NextlocationAction);
    addAction(SavepiclocationAction);
    addAction(CleanpiclocationAction);
    addAction(PiclayerAction);
    addAction(PicViewinfoAction);
    addAction(Close2Action);
    addAction(PrinterAction);
    addAction(AboutAction);
    addAction(HornAction);
    addAction(NavigateAction);
    addAction(WinsaveAction);
    addAction(MonitorAction);
    addAction(PicswitchAction);
    addAction(YkinfoAction);
    addAction(SOEAction);
    addAction(PicLockAction);
    addAction(CheckAction);
    addAction(OperationticketAction);







    // 连接信号
    connect(tableAction, &QAction::triggered, this, &MainToolbar::tableRequested);
    connect(bakAction, &QAction::triggered, this, &MainToolbar::bakActionRequested);
    connect(closeAction, &QAction::triggered, this, &MainToolbar::closeRequested);

    // 连接菜单项信号（可自定义）
    connect(pic1, &QAction::triggered, this, [=]() {
        emit pictureRequested();  // 保持一致性
    });
    connect(pic2, &QAction::triggered, this, [=]() {
        emit picture02Requested();// 可以添加其他槽
    });

    connect(cxykxxAction, &QAction::triggered, this, &MainToolbar::cxykxxRequested);

    connect(FullscreenAction, &QAction::triggered, this, &MainToolbar::FullscreenRequested);
    connect(MainwindowAction, &QAction::triggered, this, &MainToolbar::MainwindowRequested);
    connect(SystemctlpanelAction, &QAction::triggered, this, &MainToolbar::SystemctlpanelRequested);
    connect(GuangzipaiAction, &QAction::triggered, this, &MainToolbar::GuangzipaiRequested);
    connect(PicassistantAction, &QAction::triggered, this, &MainToolbar::PicassistantRequested);
    connect(TrendAction, &QAction::triggered, this, &MainToolbar::TrendRequested);
    connect(BarwindowAction, &QAction::triggered, this, &MainToolbar::BarwindowRequested);
    connect(ElechistogramAction, &QAction::triggered, this, &MainToolbar::ElechistogramRequested);
    connect(ZoominAction, &QAction::triggered, this, &MainToolbar::ZoominRequested);
    connect(ZoomoutAction, &QAction::triggered, this, &MainToolbar::ZoomoutRequested);
    connect(MoveAction, &QAction::triggered, this, &MainToolbar::MoveRequested);
    connect(HomeAction, &QAction::triggered, this, &MainToolbar::HomeRequested);
    connect(PageupAction, &QAction::triggered, this, &MainToolbar::PageupRequested);
    connect(PagedownAction, &QAction::triggered, this, &MainToolbar::PagedownRequested);
    connect(EndAction, &QAction::triggered, this, &MainToolbar::EndRequested);
    connect(PrelocationAction, &QAction::triggered, this, &MainToolbar::PrelocationRequested);
    connect(NextlocationAction, &QAction::triggered, this, &MainToolbar::NextlocationRequested);
    connect(SavepiclocationAction, &QAction::triggered, this, &MainToolbar::SavepiclocationRequested);
    connect(CleanpiclocationAction, &QAction::triggered, this, &MainToolbar::CleanpiclocationRequested);
    connect(PiclayerAction, &QAction::triggered, this, &MainToolbar::PiclayerRequested);
    connect(PicViewinfoAction, &QAction::triggered, this, &MainToolbar::PicViewinfoRequested);
    connect(Close2Action, &QAction::triggered, this, &MainToolbar::Close2Requested);
    connect(PrinterAction, &QAction::triggered, this, &MainToolbar::PrinterRequested);
    connect(AboutAction, &QAction::triggered, this, &MainToolbar::AboutRequested);
    connect(HornAction, &QAction::triggered, this, &MainToolbar::HornRequested);
    connect(NavigateAction, &QAction::triggered, this, &MainToolbar::NavigateRequested);
    connect(WinsaveAction, &QAction::triggered, this, &MainToolbar::WinsaveRequested);
    connect(MonitorAction, &QAction::triggered, this, &MainToolbar::MonitorRequested);
    connect(PicswitchAction, &QAction::triggered, this, &MainToolbar::PicswitchRequested);
    connect(YkinfoAction, &QAction::triggered, this, &MainToolbar::YkinfoRequested);
    connect(SOEAction, &QAction::triggered, this, &MainToolbar::SOERequested);
    connect(PicLockAction, &QAction::triggered, this, &MainToolbar::PicLockRequested);
    connect(CheckAction, &QAction::triggered, this, &MainToolbar::CheckRequested);
    connect(OperationticketAction, &QAction::triggered, this, &MainToolbar::OperationticketRequested);

}
