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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowWnd
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_id;
    QLabel *show_id;
    QLabel *label_name;
    QLabel *show_name;
    QLabel *label_gener;
    QLabel *show_gener;
    QLabel *label_artist;
    QLabel *show_artist;
    QLabel *label_album;
    QLabel *show_album;
    QLabel *label_year;
    QLabel *show_year;
    QLabel *label_writer;
    QLabel *show_writer;
    QLabel *label_lng;
    QLabel *show_lng;
    QLabel *label_time;
    QLabel *show_duration;
    QPushButton *pB_close;

    void setupUi(QWidget *ShowWnd)
    {
        if (ShowWnd->objectName().isEmpty())
            ShowWnd->setObjectName("ShowWnd");
        ShowWnd->resize(617, 592);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/office-reports-icon-outline-office-reports-vector-icon-for-web-design-isolated-on-white-background-700-219898713.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowWnd->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ShowWnd);
        verticalLayout->setObjectName("verticalLayout");
        label_id = new QLabel(ShowWnd);
        label_id->setObjectName("label_id");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(16);
        label_id->setFont(font);

        verticalLayout->addWidget(label_id);

        show_id = new QLabel(ShowWnd);
        show_id->setObjectName("show_id");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(16);
        show_id->setFont(font1);

        verticalLayout->addWidget(show_id);

        label_name = new QLabel(ShowWnd);
        label_name->setObjectName("label_name");
        label_name->setFont(font);

        verticalLayout->addWidget(label_name);

        show_name = new QLabel(ShowWnd);
        show_name->setObjectName("show_name");
        show_name->setFont(font1);

        verticalLayout->addWidget(show_name);

        label_gener = new QLabel(ShowWnd);
        label_gener->setObjectName("label_gener");
        label_gener->setFont(font);

        verticalLayout->addWidget(label_gener);

        show_gener = new QLabel(ShowWnd);
        show_gener->setObjectName("show_gener");
        show_gener->setFont(font1);

        verticalLayout->addWidget(show_gener);

        label_artist = new QLabel(ShowWnd);
        label_artist->setObjectName("label_artist");
        label_artist->setFont(font);

        verticalLayout->addWidget(label_artist);

        show_artist = new QLabel(ShowWnd);
        show_artist->setObjectName("show_artist");
        show_artist->setFont(font1);

        verticalLayout->addWidget(show_artist);

        label_album = new QLabel(ShowWnd);
        label_album->setObjectName("label_album");
        label_album->setFont(font);

        verticalLayout->addWidget(label_album);

        show_album = new QLabel(ShowWnd);
        show_album->setObjectName("show_album");
        show_album->setFont(font1);

        verticalLayout->addWidget(show_album);

        label_year = new QLabel(ShowWnd);
        label_year->setObjectName("label_year");
        label_year->setFont(font);

        verticalLayout->addWidget(label_year);

        show_year = new QLabel(ShowWnd);
        show_year->setObjectName("show_year");
        show_year->setFont(font1);

        verticalLayout->addWidget(show_year);

        label_writer = new QLabel(ShowWnd);
        label_writer->setObjectName("label_writer");
        label_writer->setFont(font);

        verticalLayout->addWidget(label_writer);

        show_writer = new QLabel(ShowWnd);
        show_writer->setObjectName("show_writer");
        show_writer->setFont(font1);

        verticalLayout->addWidget(show_writer);

        label_lng = new QLabel(ShowWnd);
        label_lng->setObjectName("label_lng");
        label_lng->setFont(font);

        verticalLayout->addWidget(label_lng);

        show_lng = new QLabel(ShowWnd);
        show_lng->setObjectName("show_lng");
        show_lng->setFont(font1);

        verticalLayout->addWidget(show_lng);

        label_time = new QLabel(ShowWnd);
        label_time->setObjectName("label_time");
        label_time->setFont(font);

        verticalLayout->addWidget(label_time);

        show_duration = new QLabel(ShowWnd);
        show_duration->setObjectName("show_duration");
        show_duration->setFont(font1);

        verticalLayout->addWidget(show_duration);

        pB_close = new QPushButton(ShowWnd);
        pB_close->setObjectName("pB_close");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Modern No. 20")});
        font2.setPointSize(22);
        pB_close->setFont(font2);

        verticalLayout->addWidget(pB_close);


        retranslateUi(ShowWnd);

        QMetaObject::connectSlotsByName(ShowWnd);
    } // setupUi

    void retranslateUi(QWidget *ShowWnd)
    {
        ShowWnd->setWindowTitle(QCoreApplication::translate("ShowWnd", "Show", nullptr));
        label_id->setText(QCoreApplication::translate("ShowWnd", "ID", nullptr));
        show_id->setText(QString());
        label_name->setText(QCoreApplication::translate("ShowWnd", "Name", nullptr));
        show_name->setText(QString());
        label_gener->setText(QCoreApplication::translate("ShowWnd", "Gener", nullptr));
        show_gener->setText(QString());
        label_artist->setText(QCoreApplication::translate("ShowWnd", "Artist", nullptr));
        show_artist->setText(QString());
        label_album->setText(QCoreApplication::translate("ShowWnd", "Album", nullptr));
        show_album->setText(QString());
        label_year->setText(QCoreApplication::translate("ShowWnd", "Relase year", nullptr));
        show_year->setText(QString());
        label_writer->setText(QCoreApplication::translate("ShowWnd", "Writer", nullptr));
        show_writer->setText(QString());
        label_lng->setText(QCoreApplication::translate("ShowWnd", "Language", nullptr));
        show_lng->setText(QString());
        label_time->setText(QCoreApplication::translate("ShowWnd", "Duration", nullptr));
        show_duration->setText(QString());
        pB_close->setText(QCoreApplication::translate("ShowWnd", "CLOSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowWnd: public Ui_ShowWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWWND_H
