#ifndef MAINTOOLBAR_H
#define MAINTOOLBAR_H

#include <QToolBar>
#include <QAction>

class MainToolbar : public QToolBar
{
    Q_OBJECT

public:
    explicit MainToolbar(QWidget *parent = nullptr);

signals:
    void tableRequested();
    void bakActionRequested();
    void closeRequested();
    void pictureRequested();
    void picture02Requested();
    void cxykxxRequested();

    void FullscreenRequested();
    void MainwindowRequested();
    void SystemctlpanelRequested();
    void GuangzipaiRequested();
    void PicassistantRequested();
    void TrendRequested();

    void BarwindowRequested();
    void ElechistogramRequested();
    void ZoominRequested();
    void ZoomoutRequested();
    void MoveRequested();
    void HomeRequested();
    void PageupRequested();
    void PagedownRequested();
    void EndRequested();
    void PrelocationRequested();
    void NextlocationRequested();
    void SavepiclocationRequested();
    void CleanpiclocationRequested();
    void PiclayerRequested();
    void PicViewinfoRequested();
    void Close2Requested();
    void PrinterRequested();
    void AboutRequested();
    void HornRequested();
    void NavigateRequested();
    void WinsaveRequested();
    void MonitorRequested();
    void PicswitchRequested();
    void YkinfoRequested();
    void SOERequested();
    void PicLockRequested();
    void CheckRequested();
    void OperationticketRequested();



private:
    QAction *tableAction;
    QAction *bakAction;
    QAction *closeAction;
    QAction *pictureAction;
    QAction *cxykxxAction;
    QAction *FullscreenAction;
    QAction *MainwindowAction;
    QAction *SystemctlpanelAction;
    QAction *GuangzipaiAction;
    QAction *PicassistantAction;
    QAction *TrendAction;

    QAction *BarwindowAction;
    QAction *ElechistogramAction;
    QAction *ZoominAction;
    QAction *ZoomoutAction;
    QAction *MoveAction;
    QAction *HomeAction;
    QAction *PageupAction;
    QAction *PagedownAction;
    QAction *EndAction;
    QAction *PrelocationAction;
    QAction *NextlocationAction;
    QAction *SavepiclocationAction;
    QAction *CleanpiclocationAction;
    QAction *PiclayerAction;
    QAction *PicViewinfoAction;
    QAction *Close2Action;
    QAction *PrinterAction;
    QAction *AboutAction;
    QAction *HornAction;
    QAction *NavigateAction;
    QAction *WinsaveAction;
    QAction *MonitorAction;
    QAction *PicswitchAction;
    QAction *YkinfoAction;
    QAction *SOEAction;
    QAction *PicLockAction;
    QAction *CheckAction;
    QAction *OperationticketAction;

    //QAction *Fullscreen;



    void setupActions();
};

#endif // MAINTOOLBAR_H
