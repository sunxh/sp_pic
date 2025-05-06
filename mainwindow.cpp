#include "mainwindow.h"
#include <QDebug>
#include <QTextEdit>
#include <QGuiApplication>
#include <QScreen>
#include <QCloseEvent>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //窗口最大化显示
    QScreen *screen = QGuiApplication::primaryScreen();
    if (screen) {
        QSize size = screen->size();
        qDebug() << "分辨率：" << size.width() << "x" << size.height();
        //setFixedSize(size.width(), size.height());
    }

    //setFixedSize(1920, 1080);
    //showFullScreen();


    // 中央部件
    setCentralWidget(new QTextEdit(this));

    // 创建工具栏
    toolbar = new MainToolbar(this);

    addToolBar(toolbar);



    // 连接信号与槽
    connect(toolbar, &MainToolbar::tableRequested, this, &MainWindow::SLOTS_table);
    connect(toolbar, &MainToolbar::bakActionRequested, this, &MainWindow::SLOTS_bak);
    connect(toolbar, &MainToolbar::closeRequested, this, &MainWindow::SLOTS_closePic);
    connect(toolbar, &MainToolbar::pictureRequested, this, &MainWindow::SLOTS_picture);
    connect(toolbar, &MainToolbar::cxykxxRequested, this, &MainWindow::SLOTS_cxykxx);
    connect(toolbar, &MainToolbar::FullscreenRequested, this, &MainWindow::SLOTS_Fullscreen);

    connect(toolbar, &MainToolbar::MainwindowRequested, this, &MainWindow::SLOTS_Mainwindow);
    connect(toolbar, &MainToolbar::SystemctlpanelRequested, this, &MainWindow::SLOTS_Systemctlpanel);
    connect(toolbar, &MainToolbar::GuangzipaiRequested, this, &MainWindow::SLOTS_Guangzipai);
    connect(toolbar, &MainToolbar::PicassistantRequested, this, &MainWindow::SLOTS_Picassistant);
    connect(toolbar, &MainToolbar::TrendRequested, this, &MainWindow::SLOTS_Trend);
    connect(toolbar, &MainToolbar::BarwindowRequested, this, &MainWindow::SLOTS_Barwindow);
    connect(toolbar, &MainToolbar::ElechistogramRequested, this, &MainWindow::SLOTS_Elechistogram);
    connect(toolbar, &MainToolbar::ZoominRequested, this, &MainWindow::SLOTS_Zoomin);
    connect(toolbar, &MainToolbar::ZoomoutRequested, this, &MainWindow::SLOTS_Zoomout);
    connect(toolbar, &MainToolbar::MoveRequested, this, &MainWindow::SLOTS_Move);
    connect(toolbar, &MainToolbar::HomeRequested, this, &MainWindow::SLOTS_Home);
    connect(toolbar, &MainToolbar::PageupRequested, this, &MainWindow::SLOTS_Pageup);
    connect(toolbar, &MainToolbar::PagedownRequested, this, &MainWindow::SLOTS_Pagedown);
    connect(toolbar, &MainToolbar::EndRequested, this, &MainWindow::SLOTS_End);
    connect(toolbar, &MainToolbar::PrelocationRequested, this, &MainWindow::SLOTS_Prelocation);
    connect(toolbar, &MainToolbar::NextlocationRequested, this, &MainWindow::SLOTS_Nextlocation);
    connect(toolbar, &MainToolbar::SavepiclocationRequested, this, &MainWindow::SLOTS_Savepiclocation);
    connect(toolbar, &MainToolbar::CleanpiclocationRequested, this, &MainWindow::SLOTS_Cleanpiclocation);
    connect(toolbar, &MainToolbar::PiclayerRequested, this, &MainWindow::SLOTS_Piclayer);
    connect(toolbar, &MainToolbar::PicViewinfoRequested, this, &MainWindow::SLOTS_PicViewinfo);
    connect(toolbar, &MainToolbar::Close2Requested, this, &MainWindow::SLOTS_Close2);
    connect(toolbar, &MainToolbar::PrinterRequested, this, &MainWindow::SLOTS_Printer);
    connect(toolbar, &MainToolbar::AboutRequested, this, &MainWindow::SLOTS_About);
    connect(toolbar, &MainToolbar::HornRequested, this, &MainWindow::SLOTS_Horn);
    connect(toolbar, &MainToolbar::NavigateRequested, this, &MainWindow::SLOTS_Navigate);
    connect(toolbar, &MainToolbar::WinsaveRequested, this, &MainWindow::SLOTS_Winsave);
    connect(toolbar, &MainToolbar::MonitorRequested, this, &MainWindow::SLOTS_Monitor);
    connect(toolbar, &MainToolbar::PicswitchRequested, this, &MainWindow::SLOTS_Picswitch);
    connect(toolbar, &MainToolbar::YkinfoRequested, this, &MainWindow::SLOTS_Ykinfo);
    connect(toolbar, &MainToolbar::SOERequested, this, &MainWindow::SLOTS_SOE);
    connect(toolbar, &MainToolbar::PicLockRequested, this, &MainWindow::SLOTS_PicLock);
    connect(toolbar, &MainToolbar::CheckRequested, this, &MainWindow::SLOTS_Check);
    connect(toolbar, &MainToolbar::OperationticketRequested, this, &MainWindow::SLOTS_Operationticket);








}

MainWindow::~MainWindow()
{
}

void MainWindow::SLOTS_table()
{
    qDebug() << "制表";
}

void MainWindow::SLOTS_bak()
{
    qDebug() << "空白";
}

void MainWindow::SLOTS_closePic()
{
   this->close();
}
void MainWindow::SLOTS_picture()
{
    qDebug() << "打开PIC";
}
void MainWindow::SLOTS_cxykxx()
{
    qDebug() << "查询遥控信息";
}

void MainWindow::SLOTS_Fullscreen()
{
    qDebug() << "全屏";
}

void MainWindow::SLOTS_Mainwindow()
{
    qDebug() << "主窗口";
}

void MainWindow::SLOTS_Systemctlpanel()
{
    qDebug() << "系统控制面板";
}


void MainWindow::SLOTS_Guangzipai()
{
    qDebug() << "光字牌";
}
void MainWindow::SLOTS_Picassistant()
{
    qDebug() << "图形辅助窗口";
}
void MainWindow::SLOTS_Trend()
{
    qDebug() << "曲线图";
}
void MainWindow::SLOTS_Barwindow()
{
    qDebug() << "棒图窗";
}

void MainWindow::SLOTS_Elechistogram()
{
    qDebug() << "电度直方图";
}
void MainWindow::SLOTS_Zoomin()
{
    qDebug() << "放大";
}

void MainWindow::SLOTS_Zoomout()
{
    qDebug() << "缩小";
}


void MainWindow::SLOTS_Move()
{
    qDebug() << "移动";
}

void MainWindow::SLOTS_Home()
{
    qDebug() << "第一幅图";
}

void MainWindow::SLOTS_Pageup()
{
    qDebug() << "前一幅图";
}
void MainWindow::SLOTS_Pagedown()
{
    qDebug() << "后一幅图";
}
void MainWindow::SLOTS_End()
{
    qDebug() << "最后一幅图";
}

void MainWindow::SLOTS_Prelocation()
{
    qDebug() << "上一位置";
}

void MainWindow::SLOTS_Nextlocation()
{
    qDebug() << "下一位置";
}
void MainWindow::SLOTS_Savepiclocation()
{
    qDebug() << "保存画面当前存储位置";
}
void MainWindow::SLOTS_Cleanpiclocation()
{
    qDebug() << "清除画面当前存储位置";
}
void MainWindow::SLOTS_Piclayer()
{
    qDebug() << "画面层";
}

void MainWindow::SLOTS_PicViewinfo()
{
    qDebug() << "画面视角信息";
}

void MainWindow::SLOTS_Close2()
{
    qDebug() << "关闭";
}
void MainWindow::SLOTS_Printer()
{
    qDebug() << "打印";
}
void MainWindow::SLOTS_About()
{
    qDebug() << "关于";
}

void MainWindow::SLOTS_Horn()
{
    qDebug() << "音响";
}

void MainWindow::SLOTS_Navigate()
{
    qDebug() << "导航图";
}
void MainWindow::SLOTS_Winsave()
{
    qDebug() << "窗口存盘";
}
void MainWindow::SLOTS_Monitor()
{
    qDebug() << "五防监控使能";
}
void MainWindow::SLOTS_Picswitch()
{
    qDebug() << "画面切换";
}
void MainWindow::SLOTS_Ykinfo()
{
    qDebug() << "遥控信息";
}

void MainWindow::SLOTS_SOE()
{
    qDebug() << "事故追忆";
}

void MainWindow::SLOTS_PicLock()
{
    qDebug() << "画面锁定与解锁";
}

void MainWindow::SLOTS_Check()
{
    qDebug() << "检查";
}

void MainWindow::SLOTS_Operationticket()
{
    qDebug() << "执行操作票据";
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "退出确认", "你确定要退出吗？",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        event->accept();  // 允许关闭
    } else {
        event->ignore();  // 拒绝关闭
    }
}
