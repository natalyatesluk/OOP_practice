#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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
    QAction *actioncreate;
    QAction *actionshow;
    QAction *actionexit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *mainBox;
    QPushButton *Button_create;
    QLabel *label_namePR;
    QMenuBar *menubar;
    QMenu *menumenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(652, 415);
        actioncreate = new QAction(MainWindow);
        actioncreate->setObjectName("actioncreate");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/png-transparent-add-create-new-plus-sheet-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncreate->setIcon(icon);
        actionshow = new QAction(MainWindow);
        actionshow->setObjectName("actionshow");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/office-reports-icon-outline-office-reports-vector-icon-for-web-design-isolated-on-white-background-700-219898713.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionshow->setIcon(icon1);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName("actionexit");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/png-clipart-power-symbol-computer-icons-international-electrotechnical-commission-exit-icon-hand-sign.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionexit->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        mainBox = new QGroupBox(centralwidget);
        mainBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI Light")});
        mainBox->setFont(font);
        Button_create = new QPushButton(mainBox);
        Button_create->setObjectName("Button_create");
        Button_create->setGeometry(QRect(50, 310, 540, 28));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(12);
        font1.setBold(true);
        Button_create->setFont(font1);
        label_namePR = new QLabel(mainBox);
        label_namePR->setObjectName("label_namePR");
        label_namePR->setGeometry(QRect(40, 30, 540, 266));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Modern No. 20")});
        font2.setPointSize(28);
        label_namePR->setFont(font2);
        label_namePR->setFocusPolicy(Qt::NoFocus);
        label_namePR->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(mainBox, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 652, 21));
        menumenu = new QMenu(menubar);
        menumenu->setObjectName("menumenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menumenu->menuAction());
        menumenu->addAction(actioncreate);
        menumenu->addAction(actionshow);
        menumenu->addAction(actionexit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actioncreate->setText(QCoreApplication::translate("MainWindow", "create", nullptr));
        actionshow->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        mainBox->setTitle(QCoreApplication::translate("MainWindow", "Main", nullptr));
        Button_create->setText(QCoreApplication::translate("MainWindow", "CREATE OBJECT", nullptr));
        label_namePR->setText(QCoreApplication::translate("MainWindow", "PRACTICAL WORK \342\204\2269", nullptr));
        menumenu->setTitle(QCoreApplication::translate("MainWindow", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

