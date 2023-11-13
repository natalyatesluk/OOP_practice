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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowBook
{
public:
    QGridLayout *gridLayout;
    QListWidget *lW_show;
    QPushButton *pB_choose;

    void setupUi(QWidget *ShowBook)
    {
        if (ShowBook->objectName().isEmpty())
            ShowBook->setObjectName("ShowBook");
        ShowBook->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/office-reports-icon-outline-office-reports-vector-icon-for-web-design-isolated-on-white-background-700-219898713.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowBook->setWindowIcon(icon);
        gridLayout = new QGridLayout(ShowBook);
        gridLayout->setObjectName("gridLayout");
        lW_show = new QListWidget(ShowBook);
        lW_show->setObjectName("lW_show");

        gridLayout->addWidget(lW_show, 0, 0, 1, 1);

        pB_choose = new QPushButton(ShowBook);
        pB_choose->setObjectName("pB_choose");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(20);
        pB_choose->setFont(font);

        gridLayout->addWidget(pB_choose, 1, 0, 1, 1);


        retranslateUi(ShowBook);

        QMetaObject::connectSlotsByName(ShowBook);
    } // setupUi

    void retranslateUi(QWidget *ShowBook)
    {
        ShowBook->setWindowTitle(QCoreApplication::translate("ShowBook", "Show book", nullptr));
        pB_choose->setText(QCoreApplication::translate("ShowBook", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowBook: public Ui_ShowBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWBOOK_H
