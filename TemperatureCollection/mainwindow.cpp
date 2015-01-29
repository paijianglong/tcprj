#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qlayout.h>
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
    setCentralWidget(ui->tccustomedQwtPlot);

    /*int mbHeight = ui->menuBar->height();
    int tbHeight = ui->toolBar->height();
    int sbHeight = ui->statusBar->height();
    int h = height() - mbHeight - tbHeight - sbHeight;
    ui->tccustomedQwtPlot->resize(width(), h);
    ui->tccustomedQwtPlot->setGeometry(MARGIN, MARGIN, width()-2*MARGIN, h-3*MARGIN);*/
    ui->tccustomedQwtPlot->setContentsMargins(20, 20, 20, 20);
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
