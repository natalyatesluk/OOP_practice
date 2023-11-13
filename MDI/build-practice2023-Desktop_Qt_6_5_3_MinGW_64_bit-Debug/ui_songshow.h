/********************************************************************************
** Form generated from reading UI file 'songshow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGSHOW_H
#define UI_SONGSHOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SongShow
{
public:
    QGridLayout *gridLayout;
    QTableView *tableSong;

    void setupUi(QWidget *SongShow)
    {
        if (SongShow->objectName().isEmpty())
            SongShow->setObjectName("SongShow");
        SongShow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/office-reports-icon-outline-office-reports-vector-icon-for-web-design-isolated-on-white-background-700-219898713.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SongShow->setWindowIcon(icon);
        gridLayout = new QGridLayout(SongShow);
        gridLayout->setObjectName("gridLayout");
        tableSong = new QTableView(SongShow);
        tableSong->setObjectName("tableSong");

        gridLayout->addWidget(tableSong, 0, 0, 1, 1);


        retranslateUi(SongShow);

        QMetaObject::connectSlotsByName(SongShow);
    } // setupUi

    void retranslateUi(QWidget *SongShow)
    {
        SongShow->setWindowTitle(QCoreApplication::translate("SongShow", "Song", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SongShow: public Ui_SongShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGSHOW_H
