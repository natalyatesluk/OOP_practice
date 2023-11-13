/********************************************************************************
** Form generated from reading UI file 'showsong.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWSONG_H
#define UI_SHOWSONG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowSong
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QWidget *ShowSong)
    {
        if (ShowSong->objectName().isEmpty())
            ShowSong->setObjectName("ShowSong");
        ShowSong->resize(400, 300);
        gridLayout = new QGridLayout(ShowSong);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(ShowSong);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(ShowSong);

        QMetaObject::connectSlotsByName(ShowSong);
    } // setupUi

    void retranslateUi(QWidget *ShowSong)
    {
        ShowSong->setWindowTitle(QCoreApplication::translate("ShowSong", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowSong: public Ui_ShowSong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWSONG_H
