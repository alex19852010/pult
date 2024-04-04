/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *can6;
    QPushButton *vol1;
    QPushButton *vol2;
    QPushButton *can1;
    QPushButton *can9;
    QPushButton *switch2;
    QPushButton *can4;
    QPushButton *can2;
    QPushButton *can7;
    QPushButton *can3;
    QPushButton *can8;
    QPushButton *can5;
    QPushButton *switch1;
    QTextBrowser *screen1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(275, 305);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 254, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        can6 = new QPushButton(gridLayoutWidget);
        can6->setObjectName(QString::fromUtf8("can6"));
        QFont font;
        font.setPointSize(14);
        can6->setFont(font);

        gridLayout->addWidget(can6, 1, 2, 1, 1);

        vol1 = new QPushButton(gridLayoutWidget);
        vol1->setObjectName(QString::fromUtf8("vol1"));
        vol1->setFont(font);

        gridLayout->addWidget(vol1, 3, 2, 1, 1);

        vol2 = new QPushButton(gridLayoutWidget);
        vol2->setObjectName(QString::fromUtf8("vol2"));
        vol2->setFont(font);

        gridLayout->addWidget(vol2, 4, 0, 1, 1);

        can1 = new QPushButton(gridLayoutWidget);
        can1->setObjectName(QString::fromUtf8("can1"));
        can1->setFont(font);

        gridLayout->addWidget(can1, 2, 0, 1, 1);

        can9 = new QPushButton(gridLayoutWidget);
        can9->setObjectName(QString::fromUtf8("can9"));
        QFont font1;
        font1.setPointSize(13);
        can9->setFont(font1);

        gridLayout->addWidget(can9, 0, 2, 1, 1);

        switch2 = new QPushButton(gridLayoutWidget);
        switch2->setObjectName(QString::fromUtf8("switch2"));
        switch2->setFont(font);

        gridLayout->addWidget(switch2, 3, 1, 1, 1);

        can4 = new QPushButton(gridLayoutWidget);
        can4->setObjectName(QString::fromUtf8("can4"));
        can4->setFont(font);

        gridLayout->addWidget(can4, 1, 0, 1, 1);

        can2 = new QPushButton(gridLayoutWidget);
        can2->setObjectName(QString::fromUtf8("can2"));
        can2->setFont(font);

        gridLayout->addWidget(can2, 2, 1, 1, 1);

        can7 = new QPushButton(gridLayoutWidget);
        can7->setObjectName(QString::fromUtf8("can7"));
        can7->setFont(font);

        gridLayout->addWidget(can7, 0, 0, 1, 1);

        can3 = new QPushButton(gridLayoutWidget);
        can3->setObjectName(QString::fromUtf8("can3"));
        can3->setFont(font);

        gridLayout->addWidget(can3, 2, 2, 1, 1);

        can8 = new QPushButton(gridLayoutWidget);
        can8->setObjectName(QString::fromUtf8("can8"));
        can8->setFont(font);

        gridLayout->addWidget(can8, 0, 1, 1, 1);

        can5 = new QPushButton(gridLayoutWidget);
        can5->setObjectName(QString::fromUtf8("can5"));
        can5->setFont(font);

        gridLayout->addWidget(can5, 1, 1, 1, 1);

        switch1 = new QPushButton(gridLayoutWidget);
        switch1->setObjectName(QString::fromUtf8("switch1"));
        switch1->setFont(font);

        gridLayout->addWidget(switch1, 3, 0, 1, 1);

        screen1 = new QTextBrowser(centralwidget);
        screen1->setObjectName(QString::fromUtf8("screen1"));
        screen1->setGeometry(QRect(10, 240, 251, 51));
        screen1->setFont(font);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        can6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        vol1->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        vol2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        can1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        can9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        switch2->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        can4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        can2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        can7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        can3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        can8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        can5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        switch1->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
