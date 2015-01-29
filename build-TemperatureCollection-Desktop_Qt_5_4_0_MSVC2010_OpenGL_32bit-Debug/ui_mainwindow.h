/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "tccustomedqwtplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionSnap;
    QAction *actionZoom;
    QAction *actionConfig;
    QAction *actionAbout;
    QWidget *centralWidget;
    TCCustomedQwtPlot *tccustomedQwtPlot;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu_file;
    QMenu *menu_edit;
    QMenu *menu_option;
    QMenu *menu_help;
    QMenu *menu_view;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 480);
        QIcon icon;
        icon.addFile(QStringLiteral("../../icon/chrome.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../Icons/icon/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../Icons/icon/downloads.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../Icons/icon/recording.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionSnap = new QAction(MainWindow);
        actionSnap->setObjectName(QStringLiteral("actionSnap"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../Icons/icon/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSnap->setIcon(icon4);
        actionZoom = new QAction(MainWindow);
        actionZoom->setObjectName(QStringLiteral("actionZoom"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../Icons/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom->setIcon(icon5);
        actionConfig = new QAction(MainWindow);
        actionConfig->setObjectName(QStringLiteral("actionConfig"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../Icons/icon/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfig->setIcon(icon6);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../Icons/icon/todo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tccustomedQwtPlot = new TCCustomedQwtPlot(centralWidget);
        tccustomedQwtPlot->setObjectName(QStringLiteral("tccustomedQwtPlot"));
        tccustomedQwtPlot->setGeometry(QRect(60, 20, 511, 281));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(tccustomedQwtPlot->sizePolicy().hasHeightForWidth());
        tccustomedQwtPlot->setSizePolicy(sizePolicy);
        tccustomedQwtPlot->setMouseTracking(true);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 23));
        menu_file = new QMenu(menuBar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        menu_file->setTearOffEnabled(false);
        menu_edit = new QMenu(menuBar);
        menu_edit->setObjectName(QStringLiteral("menu_edit"));
        menu_option = new QMenu(menuBar);
        menu_option->setObjectName(QStringLiteral("menu_option"));
        menu_help = new QMenu(menuBar);
        menu_help->setObjectName(QStringLiteral("menu_help"));
        menu_view = new QMenu(menuBar);
        menu_view->setObjectName(QStringLiteral("menu_view"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setIconSize(QSize(48, 48));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_file->menuAction());
        menuBar->addAction(menu_edit->menuAction());
        menuBar->addAction(menu_view->menuAction());
        menuBar->addAction(menu_option->menuAction());
        menuBar->addAction(menu_help->menuAction());
        menu_file->addAction(actionOpen);
        menu_file->addAction(actionPrint);
        menu_file->addSeparator();
        menu_file->addAction(actionExit);
        menu_edit->addAction(actionSnap);
        menu_option->addAction(actionConfig);
        menu_help->addAction(actionAbout);
        menu_view->addAction(actionZoom);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionConfig);
        toolBar->addAction(actionZoom);
        toolBar->addAction(actionSnap);
        toolBar->addAction(actionAbout);
        toolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\251\272\350\260\203\346\270\251\345\272\246\345\256\236\346\227\266\351\207\207\351\233\206\347\263\273\347\273\237", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        actionPrint->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260", 0));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        actionSnap->setText(QApplication::translate("MainWindow", "\346\210\252\345\233\276", 0));
        actionZoom->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276", 0));
        actionConfig->setText(QApplication::translate("MainWindow", "\351\205\215\347\275\256", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
        menu_file->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menu_edit->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", 0));
        menu_option->setTitle(QApplication::translate("MainWindow", "\351\200\211\351\241\271", 0));
        menu_help->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
        menu_view->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
