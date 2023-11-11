/********************************************************************************
** Form generated from reading UI file 'createwnd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWND_H
#define UI_CREATEWND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateWnd
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_id;
    QLineEdit *lineEdit_id;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_gener;
    QLineEdit *lineEdit_gener;
    QLabel *label_artist;
    QLineEdit *lineEdit_artist;
    QLabel *label_album;
    QLineEdit *lineEdit_album;
    QLabel *label_year;
    QLineEdit *lineEdit_year;
    QLabel *label_writer;
    QLineEdit *lineEdit_writer;
    QLabel *label_lng;
    QLineEdit *lineEdit_lng;
    QLabel *label_time;
    QLineEdit *lineEdit_time;
    QPushButton *Button_song;
    QPushButton *pushButtonClose;

    void setupUi(QWidget *CreateWnd)
    {
        if (CreateWnd->objectName().isEmpty())
            CreateWnd->setObjectName("CreateWnd");
        CreateWnd->resize(624, 382);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/png-transparent-add-create-new-plus-sheet-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CreateWnd->setWindowIcon(icon);
        gridLayout = new QGridLayout(CreateWnd);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(CreateWnd);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_id = new QLabel(CreateWnd);
        label_id->setObjectName("label_id");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(16);
        label_id->setFont(font);

        gridLayout->addWidget(label_id, 1, 0, 1, 1);

        lineEdit_id = new QLineEdit(CreateWnd);
        lineEdit_id->setObjectName("lineEdit_id");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        lineEdit_id->setFont(font1);
        lineEdit_id->setTabletTracking(false);
        lineEdit_id->setCursorPosition(0);

        gridLayout->addWidget(lineEdit_id, 1, 2, 1, 1);

        label_name = new QLabel(CreateWnd);
        label_name->setObjectName("label_name");
        label_name->setFont(font);

        gridLayout->addWidget(label_name, 2, 0, 1, 1);

        lineEdit_name = new QLineEdit(CreateWnd);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setFont(font1);

        gridLayout->addWidget(lineEdit_name, 2, 2, 1, 1);

        label_gener = new QLabel(CreateWnd);
        label_gener->setObjectName("label_gener");
        label_gener->setFont(font);

        gridLayout->addWidget(label_gener, 3, 0, 1, 1);

        lineEdit_gener = new QLineEdit(CreateWnd);
        lineEdit_gener->setObjectName("lineEdit_gener");

        gridLayout->addWidget(lineEdit_gener, 3, 2, 1, 1);

        label_artist = new QLabel(CreateWnd);
        label_artist->setObjectName("label_artist");
        label_artist->setFont(font);

        gridLayout->addWidget(label_artist, 4, 0, 1, 1);

        lineEdit_artist = new QLineEdit(CreateWnd);
        lineEdit_artist->setObjectName("lineEdit_artist");
        lineEdit_artist->setFont(font1);

        gridLayout->addWidget(lineEdit_artist, 4, 2, 1, 1);

        label_album = new QLabel(CreateWnd);
        label_album->setObjectName("label_album");
        label_album->setFont(font);

        gridLayout->addWidget(label_album, 5, 0, 1, 1);

        lineEdit_album = new QLineEdit(CreateWnd);
        lineEdit_album->setObjectName("lineEdit_album");
        lineEdit_album->setFont(font1);

        gridLayout->addWidget(lineEdit_album, 5, 2, 1, 1);

        label_year = new QLabel(CreateWnd);
        label_year->setObjectName("label_year");
        label_year->setFont(font);

        gridLayout->addWidget(label_year, 6, 0, 1, 2);

        lineEdit_year = new QLineEdit(CreateWnd);
        lineEdit_year->setObjectName("lineEdit_year");
        lineEdit_year->setFont(font1);

        gridLayout->addWidget(lineEdit_year, 6, 2, 1, 1);

        label_writer = new QLabel(CreateWnd);
        label_writer->setObjectName("label_writer");
        label_writer->setFont(font);

        gridLayout->addWidget(label_writer, 7, 0, 1, 1);

        lineEdit_writer = new QLineEdit(CreateWnd);
        lineEdit_writer->setObjectName("lineEdit_writer");
        lineEdit_writer->setFont(font1);

        gridLayout->addWidget(lineEdit_writer, 7, 2, 1, 1);

        label_lng = new QLabel(CreateWnd);
        label_lng->setObjectName("label_lng");
        label_lng->setFont(font);

        gridLayout->addWidget(label_lng, 8, 0, 1, 1);

        lineEdit_lng = new QLineEdit(CreateWnd);
        lineEdit_lng->setObjectName("lineEdit_lng");
        lineEdit_lng->setFont(font1);

        gridLayout->addWidget(lineEdit_lng, 8, 2, 1, 1);

        label_time = new QLabel(CreateWnd);
        label_time->setObjectName("label_time");
        label_time->setFont(font);

        gridLayout->addWidget(label_time, 9, 0, 1, 1);

        lineEdit_time = new QLineEdit(CreateWnd);
        lineEdit_time->setObjectName("lineEdit_time");
        lineEdit_time->setFont(font1);

        gridLayout->addWidget(lineEdit_time, 9, 2, 1, 1);

        Button_song = new QPushButton(CreateWnd);
        Button_song->setObjectName("Button_song");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Modern No. 20")});
        font2.setPointSize(22);
        Button_song->setFont(font2);

        gridLayout->addWidget(Button_song, 10, 1, 1, 2);

        pushButtonClose = new QPushButton(CreateWnd);
        pushButtonClose->setObjectName("pushButtonClose");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Modern No. 20")});
        font3.setPointSize(20);
        pushButtonClose->setFont(font3);

        gridLayout->addWidget(pushButtonClose, 11, 2, 1, 1);


        retranslateUi(CreateWnd);

        QMetaObject::connectSlotsByName(CreateWnd);
    } // setupUi

    void retranslateUi(QWidget *CreateWnd)
    {
        CreateWnd->setWindowTitle(QCoreApplication::translate("CreateWnd", "Create", nullptr));
        label->setText(QString());
        label_id->setText(QCoreApplication::translate("CreateWnd", "ID", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_id->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineEdit_id->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineEdit_id->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        lineEdit_id->setText(QString());
        lineEdit_id->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter id...", nullptr));
        label_name->setText(QCoreApplication::translate("CreateWnd", "Name", nullptr));
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter name...", nullptr));
        label_gener->setText(QCoreApplication::translate("CreateWnd", "Gener", nullptr));
        lineEdit_gener->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter gener...", nullptr));
        label_artist->setText(QCoreApplication::translate("CreateWnd", "Artist", nullptr));
        lineEdit_artist->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter artist...", nullptr));
        label_album->setText(QCoreApplication::translate("CreateWnd", "Album", nullptr));
        lineEdit_album->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter album...", nullptr));
        label_year->setText(QCoreApplication::translate("CreateWnd", "Relase year", nullptr));
        lineEdit_year->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter relase yaer...", nullptr));
        label_writer->setText(QCoreApplication::translate("CreateWnd", "Writer", nullptr));
        lineEdit_writer->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter writer...", nullptr));
        label_lng->setText(QCoreApplication::translate("CreateWnd", "Language", nullptr));
        lineEdit_lng->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter language...", nullptr));
        label_time->setText(QCoreApplication::translate("CreateWnd", "Duration", nullptr));
        lineEdit_time->setPlaceholderText(QCoreApplication::translate("CreateWnd", "Enter duration...", nullptr));
        Button_song->setText(QCoreApplication::translate("CreateWnd", "Add a song", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("CreateWnd", "CLOSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateWnd: public Ui_CreateWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWND_H
