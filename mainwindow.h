#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "maintoolbar.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    MainToolbar *toolbar;
    void closeEvent(QCloseEvent *event) override;

private slots:
    void SLOTS_table();
    void SLOTS_bak();
    void SLOTS_closePic();
    void SLOTS_picture();
    void SLOTS_picture02();
    void SLOTS_cxykxx();

    void SLOTS_Fullscreen();


    void SLOTS_Mainwindow();

    void SLOTS_Systemctlpanel();
    void SLOTS_Guangzipai();
    void SLOTS_Picassistant();
    void SLOTS_Trend();
    void SLOTS_Barwindow();
    void SLOTS_Elechistogram();
    void SLOTS_Zoomin();
    void SLOTS_Zoomout();
    void SLOTS_Move();
    void SLOTS_Home();
    void SLOTS_Pageup();
    void SLOTS_Pagedown();
    void SLOTS_End();
    void SLOTS_Prelocation();
    void SLOTS_Nextlocation();
    void SLOTS_Savepiclocation();
    void SLOTS_Cleanpiclocation();
    void SLOTS_Piclayer();
    void SLOTS_PicViewinfo();
    void SLOTS_Close2();
    void SLOTS_Printer();
    void SLOTS_About();
    void SLOTS_Horn();
    void SLOTS_Navigate();
    void SLOTS_Winsave();
    void SLOTS_Monitor();
    void SLOTS_Picswitch();
    void SLOTS_Ykinfo();
    void SLOTS_SOE();
    void SLOTS_PicLock();
    void SLOTS_Check();
    void SLOTS_Operationticket();















};

#endif // MAINWINDOW_H
