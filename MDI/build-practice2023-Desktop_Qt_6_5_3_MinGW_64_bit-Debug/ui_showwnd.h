/********************************************************************************
** Form generated from reading UI file 'showwnd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWWND_H
#define UI_SHOWWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowWnd
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lW_show;
    QPushButton *pB_choose;

    void setupUi(QWidget *ShowWnd)
    {
        if (ShowWnd->objectName().isEmpty())
            ShowWnd->setObjectName("ShowWnd");
        ShowWnd->resize(400, 300);
        verticalLayout = new QVBoxLayout(ShowWnd);
        verticalLayout->setObjectName("verticalLayout");
        lW_show = new QListWidget(ShowWnd);
        lW_show->setObjectName("lW_show");

        verticalLayout->addWidget(lW_show);

        pB_choose = new QPushButton(ShowWnd);
        pB_choose->setObjectName("pB_choose");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(20);
        pB_choose->setFont(font);

        verticalLayout->addWidget(pB_choose);


        retranslateUi(ShowWnd);

        QMetaObject::connectSlotsByName(ShowWnd);
    } // setupUi

    void retranslateUi(QWidget *ShowWnd)
    {
        ShowWnd->setWindowTitle(QCoreApplication::translate("ShowWnd", "Form", nullptr));
        pB_choose->setText(QCoreApplication::translate("ShowWnd", "Select", nullptr));
    } // retranslateUi

};

namespaceShowSong   class ShowSong: public Ui_ShowWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWND_H
