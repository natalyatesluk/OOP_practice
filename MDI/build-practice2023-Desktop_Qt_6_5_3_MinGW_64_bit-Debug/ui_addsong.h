/********************************************************************************
** Form generated from reading UI file 'addsong.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSONG_H
#define UI_ADDSONG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddSong
{
public:
    QGridLayout *gridLayout;
    QLabel *label_album;
    QPushButton *Button_song;
    QLineEdit *lineEdit_album;
    QLabel *label_time;
    QLabel *label_gener;
    QLabel *label_writer;
    QLabel *label_name;
    QLabel *label_lng;
    QLabel *label_artist;
    QLineEdit *lineEdit_artist;
    QLineEdit *lineEdit_gener;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_year;
    QLabel *label_year;
    QLineEdit *lineEdit_writer;
    QLineEdit *lineEdit_lng;
    QLineEdit *lineEdit_time;

    void setupUi(QWidget *AddSong)
    {
        if (AddSong->objectName().isEmpty())
            AddSong->setObjectName("AddSong");
        AddSong->resize(610, 378);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/png-transparent-add-create-new-plus-sheet-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddSong->setWindowIcon(icon);
        gridLayout = new QGridLayout(AddSong);
        gridLayout->setObjectName("gridLayout");
        label_album = new QLabel(AddSong);
        label_album->setObjectName("label_album");
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(16);
        label_album->setFont(font);

        gridLayout->addWidget(label_album, 1, 0, 1, 1);

        Button_song = new QPushButton(AddSong);
        Button_song->setObjectName("Button_song");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Modern No. 20")});
        font1.setPointSize(22);
        Button_song->setFont(font1);
        Button_song->setAutoFillBackground(false);
        Button_song->setFlat(false);

        gridLayout->addWidget(Button_song, 10, 1, 1, 2);

        lineEdit_album = new QLineEdit(AddSong);
        lineEdit_album->setObjectName("lineEdit_album");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        lineEdit_album->setFont(font2);

        gridLayout->addWidget(lineEdit_album, 1, 1, 1, 1);

        label_time = new QLabel(AddSong);
        label_time->setObjectName("label_time");
        label_time->setFont(font);

        gridLayout->addWidget(label_time, 9, 0, 1, 1);

        label_gener = new QLabel(AddSong);
        label_gener->setObjectName("label_gener");
        label_gener->setFont(font);

        gridLayout->addWidget(label_gener, 3, 0, 1, 1);

        label_writer = new QLabel(AddSong);
        label_writer->setObjectName("label_writer");
        label_writer->setFont(font);

        gridLayout->addWidget(label_writer, 7, 0, 1, 1);

        label_name = new QLabel(AddSong);
        label_name->setObjectName("label_name");
        label_name->setFont(font);

        gridLayout->addWidget(label_name, 0, 0, 1, 1);

        label_lng = new QLabel(AddSong);
        label_lng->setObjectName("label_lng");
        label_lng->setFont(font);

        gridLayout->addWidget(label_lng, 8, 0, 1, 1);

        label_artist = new QLabel(AddSong);
        label_artist->setObjectName("label_artist");
        label_artist->setFont(font);

        gridLayout->addWidget(label_artist, 2, 0, 1, 1);

        lineEdit_artist = new QLineEdit(AddSong);
        lineEdit_artist->setObjectName("lineEdit_artist");
        lineEdit_artist->setFont(font2);

        gridLayout->addWidget(lineEdit_artist, 2, 1, 1, 1);

        lineEdit_gener = new QLineEdit(AddSong);
        lineEdit_gener->setObjectName("lineEdit_gener");

        gridLayout->addWidget(lineEdit_gener, 3, 1, 1, 1);

        lineEdit_name = new QLineEdit(AddSong);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setFont(font2);

        gridLayout->addWidget(lineEdit_name, 0, 1, 1, 1);

        lineEdit_year = new QLineEdit(AddSong);
        lineEdit_year->setObjectName("lineEdit_year");
        lineEdit_year->setFont(font2);

        gridLayout->addWidget(lineEdit_year, 4, 1, 1, 1);

        label_year = new QLabel(AddSong);
        label_year->setObjectName("label_year");
        label_year->setFont(font);

        gridLayout->addWidget(label_year, 4, 0, 1, 1);

        lineEdit_writer = new QLineEdit(AddSong);
        lineEdit_writer->setObjectName("lineEdit_writer");
        lineEdit_writer->setFont(font2);

        gridLayout->addWidget(lineEdit_writer, 7, 1, 1, 1);

        lineEdit_lng = new QLineEdit(AddSong);
        lineEdit_lng->setObjectName("lineEdit_lng");
        lineEdit_lng->setFont(font2);

        gridLayout->addWidget(lineEdit_lng, 8, 1, 1, 1);

        lineEdit_time = new QLineEdit(AddSong);
        lineEdit_time->setObjectName("lineEdit_time");
        lineEdit_time->setFont(font2);

        gridLayout->addWidget(lineEdit_time, 9, 1, 1, 1);


        retranslateUi(AddSong);

        Button_song->setDefault(false);


        QMetaObject::connectSlotsByName(AddSong);
    } // setupUi

    void retranslateUi(QWidget *AddSong)
    {
        AddSong->setWindowTitle(QCoreApplication::translate("AddSong", "Add song", nullptr));
        label_album->setText(QCoreApplication::translate("AddSong", "Album", nullptr));
        Button_song->setText(QCoreApplication::translate("AddSong", "Add a song", nullptr));
        lineEdit_album->setPlaceholderText(QCoreApplication::translate("AddSong", "Enter album...", nullptr));
        label_time->setText(QCoreApplication::translate("AddSong", "Duration", nullptr));
        label_gener->setText(QCoreApplication::translate("AddSong", "Gener", nullptr));
        label_writer->setText(QCoreApplication::translate("AddSong", "Writer", nullptr));
        label_name->setText(QCoreApplication::translate("AddSong", "Name", nullptr));
        label_lng->setText(QCoreApplication::translate("AddSong", "Language", nullptr));
        label_artist->setText(QCoreApplication::translate("AddSong", "Artist", nullptr));
        lineEdit_artist->setPlaceholderText(QCoreApplication::translate("AddSong", "Enter artist...", nullptr));
        lineEdit_gener->setPlaceholderText(QCoreApplication::translate("AddSong", "Enter gener...", nullptr));
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("AddSong", "Enter name...", nullptr));
        lineEdit_year->setPlaceholderText(QCoreApplication::translate("AddSong", "Enter relase yaer...", nullptr));
        label_year->setText(QCoreApplication::translate("AddSong", "Relase year", nullptr));
        lineEdit_writer->setPlaceholderText(QCoreApplication::translate("AddSong", "Enter writer...", nullptr));
        lineEdit_lng->setPlaceholderText(QCoreApplication::translate("AddSong", "Enter language...", nullptr));
        lineEdit_time->setPlaceholderText(QCoreApplication::translate("AddSong", "Enter duration...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSong: public Ui_AddSong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSONG_H
