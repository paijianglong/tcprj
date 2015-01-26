#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_resize();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::m_resize()
{
    QDesktopWidget* pDesktopWidget = QApplication::desktop();
    int screenWidth = pDesktopWidget->availableGeometry().width();
    int screenHeight = pDesktopWidget->availableGeometry().height();

//    setGeometry(SystemConfig::UIDisplayHorizonMarginRatio*screenWidth,
//                SystemConfig::UIDisplayVerticalMarginRatio*screenHeight,
//                screenWidth*(1-2*SystemConfig::UIDisplayHorizonMarginRatio),
//                screenHeight*(1-2*SystemConfig::UIDisplayVerticalMarginRatio));

    setGeometry(H_MARGIN_RATIO*screenWidth,
                V_MARGIN_RATIO*screenHeight,
                screenWidth*(1-2*H_MARGIN_RATIO),
                screenHeight*(1-2*V_MARGIN_RATIO));

}

void MainWindow::ms_ConnectToServer()
{

}

void MainWindow::ms_SendRequest()
{

}

void MainWindow::ms_ConnectionClosedByServer()
{

}

void MainWindow::ms_Error()
{

}

void MainWindow::m_CloseConnection()
{

}
