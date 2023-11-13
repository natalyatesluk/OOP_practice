/********************************************************************************
** Form generated from reading UI file 'bookshow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSHOW_H
#define UI_BOOKSHOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookShow
{
public:
    QGridLayout *gridLayout;
    QTableView *tableBook;

    void setupUi(QWidget *BookShow)
    {
        if (BookShow->objectName().isEmpty())
            BookShow->setObjectName("BookShow");
        BookShow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/office-reports-icon-outline-office-reports-vector-icon-for-web-design-isolated-on-white-background-700-219898713.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        BookShow->setWindowIcon(icon);
        gridLayout = new QGridLayout(BookShow);
        gridLayout->setObjectName("gridLayout");
        tableBook = new QTableView(BookShow);
        tableBook->setObjectName("tableBook");
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(14);
        tableBook->setFont(font);

        gridLayout->addWidget(tableBook, 0, 0, 1, 1);


        retranslateUi(BookShow);

        QMetaObject::connectSlotsByName(BookShow);
    } // setupUi

    void retranslateUi(QWidget *BookShow)
    {
        BookShow->setWindowTitle(QCoreApplication::translate("BookShow", "Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookShow: public Ui_BookShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSHOW_H
