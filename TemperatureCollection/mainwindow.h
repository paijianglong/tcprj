#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QtWidgets/qdesktopwidget.h>
#include "systemconfig.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private:
    void m_resize();

private slots:
    void ms_ConnectToServer();
    void ms_SendRequest();
    void ms_ConnectionClosedByServer();
    void ms_Error();

private:
    void m_CloseConnection();

private:
    QTcpSocket* m_TcpSocket;
};

#endif // MAINWINDOW_H
