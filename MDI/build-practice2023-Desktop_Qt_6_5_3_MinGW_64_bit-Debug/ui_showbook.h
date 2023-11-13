/********************************************************************************
** Form generated from reading UI file 'showbook.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWBOOK_H
#define UI_SHOWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowBook
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QWidget *ShowBook)
    {
        if (ShowBook->objectName().isEmpty())
            ShowBook->setObjectName("ShowBook");
        ShowBook->resize(400, 300);
        gridLayout = new QGridLayout(ShowBook);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(ShowBook);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(ShowBook);

        QMetaObject::connectSlotsByName(ShowBook);
    } // setupUi

    void retranslateUi(QWidget *ShowBook)
    {
        ShowBook->setWindowTitle(QCoreApplication::translate("ShowBook", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowBook: public Ui_ShowBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWBOOK_H
