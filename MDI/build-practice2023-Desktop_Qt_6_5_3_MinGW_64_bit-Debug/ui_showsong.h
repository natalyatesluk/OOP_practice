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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowSong
{
public:
    QGridLayout *gridLayout;
    QListWidget *lW_show;
    QPushButton *pB_choose;

    void setupUi(QWidget *ShowSong)
    {
        if (ShowSong->objectName().isEmpty())
            ShowSong->setObjectName("ShowSong");
        ShowSong->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/office-reports-icon-outline-office-reports-vector-icon-for-web-design-isolated-on-white-background-700-219898713.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowSong->setWindowIcon(icon);
        gridLayout = new QGridLayout(ShowSong);
        gridLayout->setObjectName("gridLayout");
        lW_show = new QListWidget(ShowSong);
        lW_show->setObjectName("lW_show");

        gridLayout->addWidget(lW_show, 0, 0, 1, 1);

        pB_choose = new QPushButton(ShowSong);
        pB_choose->setObjectName("pB_choose");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(20);
        pB_choose->setFont(font);

        gridLayout->addWidget(pB_choose, 1, 0, 1, 1);


        retranslateUi(ShowSong);

        QMetaObject::connectSlotsByName(ShowSong);
    } // setupUi

    void retranslateUi(QWidget *ShowSong)
    {
        ShowSong->setWindowTitle(QCoreApplication::translate("ShowSong", "Song show", nullptr));
        pB_choose->setText(QCoreApplication::translate("ShowSong", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowSong: public Ui_ShowSong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWSONG_H
