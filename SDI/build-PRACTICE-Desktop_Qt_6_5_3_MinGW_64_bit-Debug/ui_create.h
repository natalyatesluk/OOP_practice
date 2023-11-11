/********************************************************************************
** Form generated from reading UI file 'create.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_H
#define UI_CREATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Create
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_year;
    QLabel *label_year;
    QLabel *label_name;
    QLabel *label_artist;
    QLineEdit *lineEdit_artist;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_lng;
    QLabel *label_id;
    QLineEdit *lineEdit_id;
    QLabel *label_album;
    QLineEdit *lineEdit_time;
    QLineEdit *lineEdit_album;
    QLabel *label_gener;
    QLabel *label_writer;
    QLineEdit *lineEdit_gener;
    QLineEdit *lineEdit_writer;
    QLabel *label_lng;
    QLabel *label_time;
    QPushButton *Button_song;

    void setupUi(QWidget *Create)
    {
        if (Create->objectName().isEmpty())
            Create->setObjectName("Create");
        Create->resize(493, 366);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/png-transparent-add-create-new-plus-sheet-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Create->setWindowIcon(icon);
        gridLayout = new QGridLayout(Create);
        gridLayout->setObjectName("gridLayout");
        lineEdit_year = new QLineEdit(Create);
        lineEdit_year->setObjectName("lineEdit_year");
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        lineEdit_year->setFont(font);

        gridLayout->addWidget(lineEdit_year, 4, 1, 1, 1);

        label_year = new QLabel(Create);
        label_year->setObjectName("label_year");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Modern No. 20")});
        font1.setPointSize(16);
        label_year->setFont(font1);

        gridLayout->addWidget(label_year, 4, 0, 1, 1);

        label_name = new QLabel(Create);
        label_name->setObjectName("label_name");
        label_name->setFont(font1);

        gridLayout->addWidget(label_name, 1, 0, 1, 1);

        label_artist = new QLabel(Create);
        label_artist->setObjectName("label_artist");
        label_artist->setFont(font1);

        gridLayout->addWidget(label_artist, 2, 0, 1, 1);

        lineEdit_artist = new QLineEdit(Create);
        lineEdit_artist->setObjectName("lineEdit_artist");
        lineEdit_artist->setFont(font);

        gridLayout->addWidget(lineEdit_artist, 2, 1, 1, 1);

        lineEdit_name = new QLineEdit(Create);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setFont(font);

        gridLayout->addWidget(lineEdit_name, 1, 1, 1, 1);

        lineEdit_lng = new QLineEdit(Create);
        lineEdit_lng->setObjectName("lineEdit_lng");
        lineEdit_lng->setFont(font);

        gridLayout->addWidget(lineEdit_lng, 2, 4, 1, 1);

        label_id = new QLabel(Create);
        label_id->setObjectName("label_id");
        label_id->setFont(font1);

        gridLayout->addWidget(label_id, 0, 0, 1, 1);

        lineEdit_id = new QLineEdit(Create);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setFont(font);
        lineEdit_id->setTabletTracking(false);
        lineEdit_id->setCursorPosition(0);

        gridLayout->addWidget(lineEdit_id, 0, 1, 1, 1);

        label_album = new QLabel(Create);
        label_album->setObjectName("label_album");
        label_album->setFont(font1);

        gridLayout->addWidget(label_album, 3, 0, 1, 1);

        lineEdit_time = new QLineEdit(Create);
        lineEdit_time->setObjectName("lineEdit_time");
        lineEdit_time->setFont(font);

        gridLayout->addWidget(lineEdit_time, 3, 4, 1, 1);

        lineEdit_album = new QLineEdit(Create);
        lineEdit_album->setObjectName("lineEdit_album");
        lineEdit_album->setFont(font);

        gridLayout->addWidget(lineEdit_album, 3, 1, 1, 1);

        label_gener = new QLabel(Create);
        label_gener->setObjectName("label_gener");
        label_gener->setFont(font1);

        gridLayout->addWidget(label_gener, 0, 2, 1, 1);

        label_writer = new QLabel(Create);
        label_writer->setObjectName("label_writer");
        label_writer->setFont(font1);

        gridLayout->addWidget(label_writer, 1, 2, 1, 1);

        lineEdit_gener = new QLineEdit(Create);
        lineEdit_gener->setObjectName("lineEdit_gener");

        gridLayout->addWidget(lineEdit_gener, 0, 3, 1, 2);

        lineEdit_writer = new QLineEdit(Create);
        lineEdit_writer->setObjectName("lineEdit_writer");
        lineEdit_writer->setFont(font);

        gridLayout->addWidget(lineEdit_writer, 1, 3, 1, 2);

        label_lng = new QLabel(Create);
        label_lng->setObjectName("label_lng");
        label_lng->setFont(font1);

        gridLayout->addWidget(label_lng, 2, 2, 1, 1);

        label_time = new QLabel(Create);
        label_time->setObjectName("label_time");
        label_time->setFont(font1);

        gridLayout->addWidget(label_time, 3, 2, 1, 1);

        Button_song = new QPushButton(Create);
        Button_song->setObjectName("Button_song");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Modern No. 20")});
        font2.setPointSize(22);
        Button_song->setFont(font2);

        gridLayout->addWidget(Button_song, 4, 2, 1, 3);


        retranslateUi(Create);

        QMetaObject::connectSlotsByName(Create);
    } // setupUi

    void retranslateUi(QWidget *Create)
    {
        Create->setWindowTitle(QCoreApplication::translate("Create", "Create", nullptr));
        lineEdit_year->setPlaceholderText(QCoreApplication::translate("Create", "Enter relase yaer...", nullptr));
        label_year->setText(QCoreApplication::translate("Create", "Relase year", nullptr));
        label_name->setText(QCoreApplication::translate("Create", "Name", nullptr));
        label_artist->setText(QCoreApplication::translate("Create", "Artist", nullptr));
        lineEdit_artist->setPlaceholderText(QCoreApplication::translate("Create", "Enter artist...", nullptr));
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("Create", "Enter name...", nullptr));
        lineEdit_lng->setPlaceholderText(QCoreApplication::translate("Create", "Enter language...", nullptr));
        label_id->setText(QCoreApplication::translate("Create", "ID", nullptr));
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
        lineEdit_id->setPlaceholderText(QCoreApplication::translate("Create", "Enter id...", nullptr));
        label_album->setText(QCoreApplication::translate("Create", "Album", nullptr));
        lineEdit_time->setPlaceholderText(QCoreApplication::translate("Create", "Enter duration...", nullptr));
        lineEdit_album->setPlaceholderText(QCoreApplication::translate("Create", "Enter album...", nullptr));
        label_gener->setText(QCoreApplication::translate("Create", "Gener", nullptr));
        label_writer->setText(QCoreApplication::translate("Create", "Writer", nullptr));
        lineEdit_gener->setPlaceholderText(QCoreApplication::translate("Create", "Enter gener...", nullptr));
        lineEdit_writer->setPlaceholderText(QCoreApplication::translate("Create", "Enter writer...", nullptr));
        label_lng->setText(QCoreApplication::translate("Create", "Language", nullptr));
        label_time->setText(QCoreApplication::translate("Create", "Duration", nullptr));
        Button_song->setText(QCoreApplication::translate("Create", "Add a song", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create: public Ui_Create {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_H
