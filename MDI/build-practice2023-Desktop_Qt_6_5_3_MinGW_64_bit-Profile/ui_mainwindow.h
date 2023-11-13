/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pb_ShowSong;
    QLabel *label_que;
    QPushButton *pbAddBook;
    QPushButton *pb_AddSong;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(557, 325);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(20);
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 3, 1, 1, 1);

        pb_ShowSong = new QPushButton(centralwidget);
        pb_ShowSong->setObjectName("pb_ShowSong");
        pb_ShowSong->setFont(font);

        gridLayout->addWidget(pb_ShowSong, 1, 1, 1, 1);

        label_que = new QLabel(centralwidget);
        label_que->setObjectName("label_que");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Modern No. 20")});
        font1.setPointSize(26);
        label_que->setFont(font1);
        label_que->setLayoutDirection(Qt::RightToLeft);
        label_que->setTextFormat(Qt::AutoText);
        label_que->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_que, 0, 0, 1, 2);

        pbAddBook = new QPushButton(centralwidget);
        pbAddBook->setObjectName("pbAddBook");
        pbAddBook->setFont(font);

        gridLayout->addWidget(pbAddBook, 3, 0, 1, 1);

        pb_AddSong = new QPushButton(centralwidget);
        pb_AddSong->setObjectName("pb_AddSong");
        pb_AddSong->setFont(font);

        gridLayout->addWidget(pb_AddSong, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 557, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PRACTICE", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Show audiobook", nullptr));
        pb_ShowSong->setText(QCoreApplication::translate("MainWindow", "Show song", nullptr));
        label_que->setText(QCoreApplication::translate("MainWindow", "What do you want?", nullptr));
        pbAddBook->setText(QCoreApplication::translate("MainWindow", "Add audiobook", nullptr));
        pb_AddSong->setText(QCoreApplication::translate("MainWindow", "Add song", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
