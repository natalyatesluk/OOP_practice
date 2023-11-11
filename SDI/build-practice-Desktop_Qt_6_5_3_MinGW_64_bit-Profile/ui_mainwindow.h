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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actioncreat;
    QAction *actionshow;
    QAction *actionexit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_namePR;
    QPushButton *pB_create;
    QMenuBar *menubar;
    QMenu *menumenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(760, 465);
        actioncreat = new QAction(MainWindow);
        actioncreat->setObjectName("actioncreat");
        actionshow = new QAction(MainWindow);
        actionshow->setObjectName("actionshow");
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName("actionexit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_namePR = new QLabel(centralwidget);
        label_namePR->setObjectName("label_namePR");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(26);
        label_namePR->setFont(font);
        label_namePR->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_namePR, 0, 0, 1, 1);

        pB_create = new QPushButton(centralwidget);
        pB_create->setObjectName("pB_create");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(18);
        font1.setBold(true);
        pB_create->setFont(font1);

        gridLayout->addWidget(pB_create, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 760, 21));
        menumenu = new QMenu(menubar);
        menumenu->setObjectName("menumenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menumenu->menuAction());
        menumenu->addAction(actioncreat);
        menumenu->addAction(actionshow);
        menumenu->addAction(actionexit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actioncreat->setText(QCoreApplication::translate("MainWindow", "creat", nullptr));
        actionshow->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        label_namePR->setText(QCoreApplication::translate("MainWindow", "PRACTICAL WORK \342\204\2269", nullptr));
        pB_create->setText(QCoreApplication::translate("MainWindow", "CREATE OBJECT", nullptr));
        menumenu->setTitle(QCoreApplication::translate("MainWindow", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
